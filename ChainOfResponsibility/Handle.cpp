#include "Handle.h"
#include <iostream>
using namespace std;

Handle::Handle()
{}
Handle::Handle(Handle* succ)
{
	this->_succ = succ;
}

Handle::~Handle()
{}

void Handle::SetSuccessor(Handle* succ)
{
	this->_succ = succ;
}

Handle* Handle::GetSuccessor()
{
	return _succ;
}

ConcreteHandleA::ConcreteHandleA()
{}
ConcreteHandleA::~ConcreteHandleA()
{}
ConcreteHandleA::ConcreteHandleA(Handle* succ):Handle(succ)
{
	
}

void ConcreteHandleA::HandleRequest()
{
	if(this->GetSuccessor())
	{
		cout << "this problem passed to Successor\n";
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		cout << "ConcreteHandleA I handle this problem\n";
	}
}


ConcreteHandleB::ConcreteHandleB()
{}
ConcreteHandleB::~ConcreteHandleB()
{}
ConcreteHandleB::ConcreteHandleB(Handle* succ):Handle(succ)
{
	
}

void ConcreteHandleB::HandleRequest()
{
	if(this->GetSuccessor())
	{
		cout << "this problem passed to Successor\n";
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		cout << "ConcreteHandleB I handle this problem\n";
	}
}


