#include "Proxy.h"
#include <iostream>
using namespace std;

Subject::Subject()
{}

Subject::~Subject()
{}

void Subject::Request()
{}

ConcreteSubject::ConcreteSubject()
{}

ConcreteSubject::~ConcreteSubject()
{}

void ConcreteSubject::Request()
{
	cout<< "ConcreteSubject::Request\n";
}

Proxy::Proxy(Subject* sbj)
{
	_sbj = sbj;
}

Proxy::~Proxy()
{}

void Proxy::Request()
{
	cout << "Proxy Func\n";
	_sbj->Request();
}
