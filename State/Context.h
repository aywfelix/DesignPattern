#ifndef __CONTEXT_H_
#define __CONTEXT_H_
#include "State.h"
class State;

class Context
{
public:
    Context();
	Context(State* st);
	void OperationInterface();
	void OperationChangeState();
	bool ChangeState(State* st);	
    virtual ~Context();
private:
friend class State;

	State* _st;
};
#endif
