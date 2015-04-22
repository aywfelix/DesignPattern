#include "Context.h"
#include <iostream>
using namespace std;

Context::Context(Strategy* strategy)
{
	_strategy = strategy;
}

Context::~Context()
{}

void Context::DoAction()
{
	cout << "Context::DoAction\n";
	_strategy->AlgrithmInterface();
}
