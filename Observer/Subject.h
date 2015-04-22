#ifndef __SUBJECT_H_
#define __SUBJECT_H_

#include "Observer.h"
#include <list>
#include <string>
#include <iostream>
using namespace std;
typedef string State;
class Observer;

class Subject
{
public:
    Subject();
    virtual ~Subject();
	void Attach(Observer* ob);
    void Detach(Observer* ob);
	virtual void SetState(State& st)=0;
	virtual State* GetState()=0;
	void Notify();
private:
	list<Observer*> _obs;
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    virtual ~ConcreteSubject();
	void SetState(State& st);
	State* GetState();
private:
	State *_st;
};
#endif
