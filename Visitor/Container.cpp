#include "Container.h"

Container::Container()
{}
Container::~Container()
{}
void Container::Attach(Element* elm)
{
	_li.push_back((Employee*)elm);
}
void Container::Detach(Element* elm)
{
	_li.push_back((Employee*)elm);
}
void Container::Accept(Visitor* vis)
{
	for(list<Employee*>::iterator ite = _li.begin(); ite != _li.end(); ++ite)
	{
		(*ite)->Accept(vis);
	}
}
