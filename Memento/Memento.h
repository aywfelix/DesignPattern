#ifndef __MEMENTO_H
#define __MEMENTO_H

#include "Originator.h"
#include <iostream>
#include <string>
using namespace std;

typedef string State;
class Originator;
class Memento
{
private:
friend class Originator;
    Memento();
	Memento(const State& st);
	State GetState();
	void SetState(const State& st);
    virtual ~Memento();
	State _st;
};
#endif
