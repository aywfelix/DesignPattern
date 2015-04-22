#include "Subject.h"

Subject::Subject()
{}

Subject::~Subject()
{}

void Subject::Attach(Observer* ob)
{
	if(ob)
	{
		_obs.push_front(ob);
	}
}

void Subject::Detach(Observer* ob)
{
	if(ob)
	{
		_obs.remove(ob);
	}
}

void Subject::Notify()
{
	if(!_obs.empty())
	{
		list<Observer*>::iterator ite = _obs.begin();
		for(;ite != _obs.end(); ++ite)
		{
			if(*ite)
			{
				(*ite)->Update(this);
			}
		}
	}
}

ConcreteSubject::ConcreteSubject()
{}

ConcreteSubject::~ConcreteSubject()
{}

void ConcreteSubject::SetState(State& st)
{
	_st = &st;
}
State* ConcreteSubject::GetState()
{
	return _st;
}





