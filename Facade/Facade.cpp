#include "Facade.h"
#include <iostream>
using namespace std;

SubSystem1::SubSystem1()
{}

SubSystem1::~SubSystem1()
{}

void SubSystem1::Operation()
{
	cout << "Subsystem1 operation\n";
}

SubSystem2::SubSystem2()
{}

SubSystem2::~SubSystem2()
{}

void SubSystem2::Operation()
{
	cout << "Subsystem2 operation\n";
}

Facade::Facade()
{}

Facade::~Facade()
{
	delete _sub2;
	delete _sub1;
}
void Facade::NewSubsystem()
{
	_sub1 = new SubSystem1();
	_sub2 = new SubSystem2();
}
void Facade::Operation()
{
	_sub1->Operation();
	_sub2->Operation();
}
