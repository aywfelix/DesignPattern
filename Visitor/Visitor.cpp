#include "Visitor.h"
#include <iostream>
using namespace std;

Visitor::Visitor()
{}

Visitor::~Visitor()
{}

InComeVisitor::InComeVisitor()
{}

InComeVisitor::~InComeVisitor()
{}

void InComeVisitor::Visit(Element* elm)
{
    Employee *ee = (Employee*)elm;
	cout << "InComeVisitor::Visit "<< ee->_name<<endl;
}

OutComeVisitor::OutComeVisitor()
{}

OutComeVisitor::~OutComeVisitor()
{}

void OutComeVisitor::Visit(Element* elm)
{
	Employee *ee = (Employee*)elm;
	cout << "OutComeVisitor::Visit" << ee->_name<<endl;
}

