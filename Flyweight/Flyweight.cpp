#include "Flyweight.h"
#include <iostream>
using namespace std;

Flyweight::Flyweight(string intrinsicState)
{
	this->_intrinsicState = intrinsicState;
	cout << intrinsicState<< endl;
}

Flyweight::~Flyweight()
{}

void Flyweight::Operation(const string& extrinsicState)
{
	
}

string Flyweight::getIntrinsicState()
{
	return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState):Flyweight(intrinsicState)
{
	cout << "ConcreteFlyweight::ConcreteFlyweight" << endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{}

void ConcreteFlyweight::Operation(const string& extrinsicState)
{
	cout << getIntrinsicState() << ":"<< extrinsicState <<endl;
}
