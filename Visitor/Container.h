#ifndef __CONTAINER_H_
#define __CONTAINER_H_
#include "Element.h"
#include "Visitor.h"
#include <list>
#include <iostream>
using namespace std;

class Visitor;
class Element;
class Container
{
public:
    Container();
    ~Container();
	void Attach(Element* elm);
	void Detach(Element* elm);
	void Accept(Visitor* vis);
private:
	list<Employee*> _li;
};
#endif
