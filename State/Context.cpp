#include "Context.h"
#include <iostream>
using namespace std;

Context::Context()
{}

Context::Context(State* st)
{
	this->_st = st;
}

Context::~Context()
{
	// delete _st;
}

void Context::OperationInterface()
{
	_st->OperationInterface(this);
}

bool Context::ChangeState(State* st)
{
	this->_st = st;
	return true;
}

void Context::OperationChangeState()
{
	_st->OperationChangeState(this);
}


