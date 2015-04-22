#ifndef __VISITOR_H_
#define __VISITOR_H_

#include "Element.h"
class Element;
class Visitor
{
public:
    Visitor();
    virtual ~Visitor();
	virtual void Visit(Element* elm)=0;
};

class InComeVisitor : public Visitor
{
public:
    InComeVisitor();
    virtual ~InComeVisitor();
	void Visit(Element* elm);
};

class OutComeVisitor : public Visitor
{
public:
    OutComeVisitor();
    virtual ~OutComeVisitor();
	void Visit(Element* elm);
};
#endif
