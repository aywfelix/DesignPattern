#ifndef __ORIGINATOR_H_
#define __ORIGINATOR_H_

#include "Memento.h"
#include <iostream>
#include <string>
using namespace std;
typedef string State;
class Memento;
class Originator
{
public:

    Originator();
	Originator(const State& st);
	Memento* CreateMemento();
	void SetMemento(Memento* mem);
	void RestoreMemento(Memento* mem);
    virtual ~Originator();
	State GetState();
	void SetState(const State& st);
	void Print();
private:
	State _st;
	Memento* _mem;
};
#endif
