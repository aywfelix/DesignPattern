#include "Element.h"

Element::Element()
{}

Element::~Element()
{}

Employee::Employee(string name):_name(name)
{}

Employee::~Employee()
{}

void Employee::Accept(Visitor* vis)
{
	cout << "Employee::Accept:"<<this->_name<< endl;
    vis->Visit(this);
}
