
#ifndef SENT_H
#define SENT_H

#include <opencog/cogserver/modules/agents/Agent.h>
#include <opencog/cogserver/modules/agents/Scheduler.h>
#include <opencog/cogserver/modules/agents/AgentsModule.h>
#include <opencog/cogserver/server/Factory.h>
#include <opencog/attention/AttentionModule.h>
#include <boost/signals2.hpp>

#include <opencog/cogserver/server/Module.h>

namespace opencog {
  
  class CogServer;
  class Module;

  class Sent : public Module {
  private:
    CogServer& cs;
    AgentPtr agent_ptr;
    Scheduler* _scheduler;

    void AVChangedCBListener(const Handle& h, const AttentionValuePtr& av_old,
                             const AttentionValuePtr& av_new);

    void TVChangedCBListener(const Handle& h, const TruthValuePtr& av_old,
                             const TruthValuePtr& tv_new);
    void registerAgentRequests();
    void unregisterAgentRequests();

    void genWords(int groups,int groupsize,int nonspecial);
  public:

    static inline const char* id();
    //Load word dict.
    DECLARE_CMD_REQUEST(ExperimentSetupModule, "start-exp",do_start_exp,
            "Loads word dict for experimentation. The word dict file should have two sections\n"
            "SPEICAL_WORDS = [comma separated words]\n"
            "NON_SPECIAL_WORDS = [comma separated words] size\n",
            "Usage: load-word-dict [FILE_NAME]\n"
            "Dump time serise ECAN data\n",
            false, true)

    DECLARE_CMD_REQUEST(ExperimentSetupModule, "stop-exp",do_stop_exp,
            "Loads word dict for experimentation. The word dict file should have two sections\n"
            "SPEICAL_WORDS = [comma separated words]\n"
            "NON_SPECIAL_WORDS = [comma separated words] size\n",
            "Usage: load-word-dict [FILE_NAME]\n"
            "Dump time serise ECAN data\n",
            false, true)
    Sent(CogServer& cs);
    void init();
    virtual ~Sent();
  };
}

#endif // SENT_H
