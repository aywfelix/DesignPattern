#include "Adpater.h"
#include <iostream>
using namespace std;

Target::Target()
{}

Target::~Target()
{}

Adaptee::Adaptee()
{}

void Adaptee::SpecialRequest()
{
	cout << "Adaptee::Request" << endl;
}
Adaptee::~Adaptee()
{}

Adapter::Adapter(Adaptee* adaptee)
{
	_adaptee = adaptee;
}

Adapter::~Adapter()
{}

void Adapter::Request()
{
	_adaptee->SpecialRequest();
}
