/*
 * opencog/attention/HebbianUpdatingAgent.cc
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

#include <algorithm>
#include <math.h>
#include <time.h>

#include <opencog/util/Config.h>
#include <opencog/util/mt19937ar.h>
#include <opencog/attentionbank/types/atom_types.h>

#include <opencog/atomspace/AtomSpace.h>
#include <opencog/atoms/base/Link.h>
#include <opencog/atoms/base/Node.h>
#include <opencog/attentionbank/bank/AttentionBank.h>
#include <opencog/atoms/truthvalue/SimpleTruthValue.h>

#include "HebbianUpdatingAgent.h"
#include "Neighbors.h"

//#define DEBUG

using namespace opencog;

HebbianUpdatingAgent::HebbianUpdatingAgent(CogServer& cs) :
        Agent(cs)
{
    _bank = &attentionbank(_as);
    // Provide a logger
    setLogger(new opencog::Logger("HebbianUpdatingAgent.log", Logger::FINE, true));
}

void HebbianUpdatingAgent::run()
{
    HandleSeq atoms;
    size_t size;

    std::back_insert_iterator<HandleSeq> out_hi(atoms);

    _bank->get_handle_set_in_attentional_focus(out_hi);

    size = atoms.size();

    if (size == 0)
        return;

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0,size-1);

    Handle source = atoms[distribution(generator)];

    updateHebbianLinks(source);
}

void HebbianUpdatingAgent::updateHebbianLinks(Handle source)
{
    double tcDecayRate = 0.1f;
    double tc, old_tc, new_tc;

    IncomingSet links = source->getIncomingSetByType(ASYMMETRIC_HEBBIAN_LINK);

    for (const Handle& h : links) {
        if (source != h->getOutgoingAtom(0))
            continue;
        const HandleSeq& outgoing = h->getOutgoingSet();
        new_tc = targetConjunction(outgoing);

        // old link strength decays
        TruthValuePtr oldtv  = h->getTruthValue();
        old_tc = oldtv->get_mean();
        tc = tcDecayRate * new_tc + (1.0 - tcDecayRate) * old_tc;
        std::cout<<"tc: "<<tc<<std::endl;
        //update truth value accordingly
        TruthValuePtr newtv = SimpleTruthValue::createTV(tc, 0.1);
        h->setTruthValue(h->getTruthValue()->merge(newtv));
        std::cout<<"after truthvalue update" << h->to_string()<<std::endl;
    }
}

double HebbianUpdatingAgent::targetConjunction(HandleSeq handles)
{
    if (handles.size() != 2)
    {
        throw RuntimeException(
                TRACE_INFO,
                "Size of outgoing set of a hebbian link must be 2.");
    }

    auto normsti_i = _bank->getNormalisedZeroToOneSTI(get_av(handles[0]), true, true);
    auto normsti_j = _bank->getNormalisedZeroToOneSTI(get_av(handles[1]), true, true);
    double conj = (normsti_i * normsti_j) + ((normsti_j - normsti_i) * std::abs(normsti_j -normsti_i));

    conj = (conj + 1.0) / 2.0;
    std::cout<<"av: " << (*get_av(handles[0])).to_string()<<std::endl;
    std::cout << " Handles: " <<handles[0]->to_string() <<" normsti_i: " <<normsti_i <<"normsti_j: "<<normsti_j<<" conj: "<<conj<<std::endl;
    return conj;
}
