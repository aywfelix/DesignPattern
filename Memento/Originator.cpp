#include "Originator.h"

Originator::Originator()
{}

Originator::Originator(const State& st)
{
	_st = st;
	_mem = 0;
}


Memento* Originator::CreateMemento()
{
	return new Memento(_st);
}
void Originator::SetMemento(Memento* mem)
{
	_mem = mem;
}
void Originator::RestoreMemento(Memento* mem)
{
	this->_st = _mem->GetState();
}
Originator::~Originator()
{
	
}
State Originator::GetState()
{
	return _st;
}
void Originator::SetState(const State& st)
{
	this->_st = st;
}
void Originator::Print()
{
	cout << this->_st <<endl;
}

