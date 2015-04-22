#ifndef __OBSERVER_H_
#define __OBSERVER_H_
#include "Subject.h"
#include <iostream>
#include <string>
using namespace std;
typedef string State;

class Subject;
class Observer
{
public:
	State* _st;
    Observer();
    virtual ~Observer();
	virtual void Update(Subject* sj) =0;
	virtual void Print()=0;
protected:

};

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(Subject* sj);
    ~ConcreteObserverA();
	Subject* GetSubject();
	void Update(Subject* sj);
	void Print(); 
private:
	Subject* _sj;
};


class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(Subject* sj);
    ~ConcreteObserverB();
	Subject* GetSubject();
    void Update(Subject* sj);
	void Print(); 
private:
	Subject* _sj;
};
#endif
