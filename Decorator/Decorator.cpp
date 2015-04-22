#include "Decorator.h"
#include <iostream>
using namespace std;

Component::Component()
{}

Component::~Component()
{}

ConcreteComponent::ConcreteComponent()
{}

ConcreteComponent::~ConcreteComponent()
{}

void ConcreteComponent::Opration()
{
	cout << "ConcreteComponent::Opration()" << endl;
}

Decorator::Decorator(Component* com)
{
	_com = com;
}

Decorator::~Decorator()
{}

void Decorator::Opration()
{}

ConcreteDecorator::ConcreteDecorator(Component* com):Decorator(com)
{}

ConcreteDecorator::~ConcreteDecorator()
{}

void ConcreteDecorator::AddBehivior()
{
	cout << "ConcreteDecorator::AddBehivior()" << endl;
}
void ConcreteDecorator::Opration()
{
	_com->Opration();
	this->AddBehivior();
}
