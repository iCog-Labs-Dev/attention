#include "Sent.h"
#include <opencog/cogserver/server/Module.h>
#include <opencog/cogserver/server/CogServer.h>
#include <iostream>

using namespace opencog;

DECLARE_MODULE(Sent);

Sent::Sent(CogServer& cs) : Module(cs) {
  init();
}

void Sent::init() {
    std::string save = config().get("MODULES");
    config().set("MODULES", "libagents.so");
    _cogserver.loadModules();
    config().set("MODULES", save);
    Module* amod = _cogserver.getModule("opencog::AgentsModule");
    AgentsModule* agmod = (AgentsModule*) amod;
    _scheduler = &agmod->get_scheduler();
}
