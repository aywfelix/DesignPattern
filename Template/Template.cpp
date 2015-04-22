#include "Template.h"
#include <iostream>
using namespace std;

AbstractTemp::AbstractTemp()
{}

AbstractTemp::~AbstractTemp()
{}

void AbstractTemp::TemplateMethod()
{
	this->Permissive1();
	this->Permissive2();
}
Sub1::Sub1()
{}

Sub1::~Sub1()
{}

void Sub1::Permissive1()
{
	cout << "Sub1::Permissive1" <<endl;
}
void Sub1::Permissive2()
{
	cout << "Sub1::Permissive2" <<endl;
}
Sub2::Sub2()
{}

Sub2::~Sub2()
{}

void Sub2::Permissive1()
{
	cout << "Sub2::Permissive1" << endl;
}

void Sub2::Permissive2()
{
	cout << "Sub2::Permissive2" << endl;
}
