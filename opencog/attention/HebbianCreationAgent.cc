/*
 * opencog/attention/HebbianCreationAgent.cc
 *
 * Written by Roman Treutlein
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#include <opencog/util/Config.h>
#include <opencog/util/algorithm.h>

#include <opencog/atoms/atom_types/NameServer.h>
#include <opencog/atoms/base/Link.h>
#include <opencog/atoms/truthvalue/IndefiniteTruthValue.h>
#include <opencog/atoms/truthvalue/SimpleTruthValue.h>
#include <opencog/attentionbank/types/atom_types.h>

#include <opencog/atomspace/AtomSpace.h>
#include <opencog/attentionbank/bank/AttentionBank.h>
#include <opencog/cogserver/server/CogServer.h>

#include "AttentionModule.h"
#include "AttentionUtils.h"
#include "HebbianCreationAgent.h"
#include "Neighbors.h"

#ifdef DEBUG
#undef DEBUG
#endif

using namespace opencog;

HebbianCreationAgent::HebbianCreationAgent(CogServer& cs) :
    Agent(cs), _atq(&cs.getAtomSpace()), maxLinkNum(0), localToFarLinks(0)
{
    _bank = &attentionbank(_as);

    // Provide a logger, but disable it initially
    setLogger(new opencog::Logger("HebbianCreationAgent.log", Logger::FINE, true));
}

/**
 * @brief Executes the Hebbian creation process.
 *
 * This function performs the following steps:
 * 1. Retrieves the maximum number of links and the local-to-far link ratio from the attention parameter query.
 * 2. Checks if there are new atoms in the attentional vector and returns if none are found.
 * 3. Pops a source atom from the attentional vector and returns if the source is undefined.
 * 4. Ensures that HebbianLinks do not enter the attentional focus boundary.
 * 5. Retrieves the atoms in the attentional focus and removes any HebbianLinks.
 * 6. Excludes the source atom from the attentional focus.
 * 7. Retrieves neighboring atoms connected by AsymmetricHebbianLinks in either direction.
 * 8. Determines the set differences between the attentional focus and the sets of existing sources and targets.
 * 9. Adds new AsymmetricHebbianLinks for atoms that require them.
 * 10. Creates a specified number of links outside the attentional focus.
 * 11. Checks the number of HebbianLinks the source atom has and removes excess links if necessary.
 */
void HebbianCreationAgent::run()
{
    maxLinkNum = std::stoi(_atq.get_param_value
                           (AttentionParamQuery::heb_maxlink));
    localToFarLinks = std::stoi(_atq.get_param_value
                               (AttentionParamQuery::heb_local_farlink_ratio));

    Handle source;
    if (AttentionModule::newAtomsInAV.is_empty())
      return;

    AttentionModule::newAtomsInAV.pop(source);
    if (source == Handle::UNDEFINED)
        return;

    // HebbianLinks should not normally enter to the AF boundary since they
    // should not normally have STI values.The below check will avoid such
    // Scenarios from happening which could lead to HebbianLink creation
    // bn atoms containing HebbianLink.
    if (nameserver().isA(source->get_type(), HEBBIAN_LINK))
        return;

    // Retrieve the atoms in the AttentionalFocus
    HandleSet attentionalFocus;
    _bank->get_handle_set_in_attentional_focus(std::inserter(attentionalFocus,attentionalFocus.begin()));
  
    // Remove HebbianLinks. if AF is not full HebbianLinks might be inserted
    // into AF when set_sti function is called.
    HandleSeq attentionalF(attentionalFocus.begin(), attentionalFocus.end());
    removeHebbianLinks(attentionalF);
    attentionalFocus = HandleSet(attentionalF.begin(),attentionalF.end());

    // Exclude the source atom
    attentionalFocus.erase(source);

    // Get the neighboring atoms, where the connecting edge
    // is an AsymmetricHebbianLink in either direction
    HandleSeq existingAsSourceHS =
            get_target_neighbors(source, ASYMMETRIC_HEBBIAN_LINK);
    HandleSeq existingAsTargetHS =
            get_source_neighbors(source, ASYMMETRIC_HEBBIAN_LINK);

    HandleSet existingAsSource(existingAsSourceHS.begin(),existingAsSourceHS.end());
    HandleSet existingAsTarget(existingAsTargetHS.begin(),existingAsTargetHS.end());

    // Get the set differences between the AttentionalFocus
    // and the sets of existing sources and targets
    HandleSet needToBeSource = set_difference(attentionalFocus,
                                              existingAsSource);
    HandleSet needToBeTarget = set_difference(attentionalFocus,
                                              existingAsTarget);

    int count = 0;

    // Resulting in the sets of nodes that require
    // a new AsymmetricHebbianLink in either direction
    for (const Handle atom : needToBeSource) {
        addHebbian(atom,source);
    }

    for (const Handle atom : needToBeTarget) {
        addHebbian(source,atom);
        count++;
    }

        //How many links outside the AF should be created
        int farLinks = round(count / localToFarLinks);

        //Pick a random target and create the link if it doesn't exist already
        for (int i = 0; i < farLinks; i++) {
            Handle target = _bank->getRandomAtomNotInAF();
            if(Handle::UNDEFINED != target and
               (not nameserver().isA(target->get_type(), HEBBIAN_LINK))){
                Handle link = _as->get_handle(ASYMMETRIC_HEBBIAN_LINK, source, target);
                if (link == Handle::UNDEFINED)
                    addHebbian(source,target);
            }
        }
    //Check the ammount of HebbianLinks the Atom has
    IncomingSet iset;
    nameserver().foreachRecursive(
        [&] (Type type)->void {
            IncomingSet ts = source->getIncomingSetByType(type);
            iset.insert(iset.end(), ts.begin(), ts.end());
        },
        HEBBIAN_LINK);

    //If it is more then the allowed max delete some randomly.
    //TODO: find a simple rule to decide which atoms to forget
    //      that will keep some of the weak links intact
    if (iset.size() >= maxLinkNum) {
        std::uniform_int_distribution<int> distribution2(0,iset.size()-1);
        std::default_random_engine generator;
        size_t s = iset.size();
        do {
            _as->remove_atom(iset[distribution2(generator)]->get_handle(), true);
            s--;
        } while (s >= maxLinkNum);
    }
}

void HebbianCreationAgent::addHebbian(Handle source,Handle target)
{
    Handle link = _as->add_link(ASYMMETRIC_HEBBIAN_LINK, source, target);
    link->setTruthValue(SimpleTruthValue::createTV(0.5, 0.1));
    _bank->inc_vlti(link);
}
