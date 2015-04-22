#ifndef __ELEMENT_H_
#define __ELEMENT_H_

#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;

class Visitor;

class Element
{
public:
    Element();
    virtual ~Element();
	virtual void Accept(Visitor* vis)=0;
};

class Employee : public Element
{
public:
	string _name;
    Employee(string name);
    virtual ~Employee();
	void Accept(Visitor* vis);
private:
	
};
#endif
