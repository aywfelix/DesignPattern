#include "Prototype.h"
#include <iostream>
Prototype::Prototype()
{}
Prototype::~Prototype()
{}

ConcretePrototype::ConcretePrototype()
{}

ConcretePrototype::~ConcretePrototype()
{}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& prototype)
{
	std::cout<<"copy construct\n";
}

Prototype* ConcretePrototype::clone() const
{
	return new ConcretePrototype(*this);
}






