#ifndef __STATE_H_
#define __STATE_H_
#include "Context.h"
class Context;
class State
{
public:
    State();
    virtual ~State();
	virtual void OperationInterface(Context*)=0;
	virtual void OperationChangeState(Context*)=0;
	virtual bool ChangeState(Context* con, State* st);
};

class ConcreteStateA : public State
{
public:
    ConcreteStateA();
    virtual ~ConcreteStateA();
	void OperationInterface(Context* con);
	void OperationChangeState(Context* con);
};

class ConcreteStateB : public State
{
public:
    ConcreteStateB();
    virtual ~ConcreteStateB();
	void OperationInterface(Context* con);
	void OperationChangeState(Context* con);
};
#endif
