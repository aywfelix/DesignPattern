#include "Memento.h"

Memento::Memento()
{
	
}
Memento::Memento(const State& st)
{
	_st = st;
}
State Memento::GetState()
{
	return _st;
}
void Memento::SetState(const State& st)
{
	_st = st;
}
Memento::~Memento()
{
	
}
