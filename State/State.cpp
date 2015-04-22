#include "State.h"
#include <iostream>
using namespace std;

State::State()
{}

State::~State()
{}

bool State::ChangeState(Context* con, State* st)
{
	con->ChangeState(st);
	return true;
}

ConcreteStateA::ConcreteStateA()
{}

ConcreteStateA::~ConcreteStateA()
{}

void ConcreteStateA::OperationInterface(Context* con)
{
	cout << "ConcreteStateA::OperationInterface\n";
	
}

void ConcreteStateA::OperationChangeState(Context* con)
{
	cout << "ConcreteStateA::OperationChangeState\n";
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateB());
}


ConcreteStateB::ConcreteStateB()
{}

ConcreteStateB::~ConcreteStateB()
{}

void ConcreteStateB::OperationInterface(Context* con)
{
	cout << "ConcreteStateB::OperationInterface\n";
}

void ConcreteStateB::OperationChangeState(Context* con)
{
	cout << "ConcreteStateB::OperationChangeState\n";
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateA());
}


