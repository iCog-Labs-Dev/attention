#include <opencog/guile/SchemeEval.h>
#include <opencog/atoms/base/Handle.h>
#include <opencog/cogserver/server/CogServer.h>
#include <opencog/cogserver/modules/agents/Agent.h>

#include <memory>
#include <ctime>
using namespace opencog;
using namespace std;
class SchemeEval;
class SentenceGenStimulateAgent : public Agent{
private:
    UnorderedHandleSet _hword_wordInstance_nodes;
    std::shared_ptr<SchemeEval> _scm_eval;

    int startcount;
    time_t stime;

public:
    virtual ~ SentenceGenStimulateAgent();
    SentenceGenStimulateAgent();

    virtual const ClassInfo& classinfo() const;
    static const ClassInfo& info();
    virtual void run();

    void generate_stimulate_sentence();
};
typedef std::shared_ptr<SentenceGenStimulateAgent> SentenceGenStimulateAgentPtr;


