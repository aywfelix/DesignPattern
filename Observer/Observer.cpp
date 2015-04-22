#include "Observer.h"

Observer::Observer()
{}

Observer::~Observer()
{}

ConcreteObserverA::ConcreteObserverA(Subject* sj)
{
	_sj = sj;
	_sj->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	_sj->Detach(this);
	if(_sj)
	{
		delete _sj;
	}
}

Subject* ConcreteObserverA::GetSubject()
{
	return _sj;
}

void ConcreteObserverA::Update(Subject* sj)
{
	_st = sj->GetState();
	Print();
}

void ConcreteObserverA::Print()
{
	cout << "ConcreteObserverA : " << *(_sj->GetState()) << endl;
}


ConcreteObserverB::ConcreteObserverB(Subject* sj)
{
	_sj = sj;
	_sj->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	_sj->Detach(this);
	if(_sj)
	{
		delete _sj;
	}
}

Subject* ConcreteObserverB::GetSubject()
{
	return _sj;
}

void ConcreteObserverB::Update(Subject* sj)
{
	_st = sj->GetState();
	Print();
}

void ConcreteObserverB::Print()
{
	cout << "ConcreteObserverB : " << *(_sj->GetState()) << endl;
}



