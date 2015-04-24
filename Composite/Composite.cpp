#include <iostream>
#include "Composite.h"

Component::Component()
{}

Component::~Component()
{}

void Component::AddCom(Component* com)
{}

void Component::Remove(Component* com)
{}

Component* Component::GetChild(int index)
{}
void Component::Operation()
{
	std::cout << "Component::Operation" <<std::endl;
}

Composite::Composite()
{}

Composite::~Composite()
{}

void Composite::AddCom(Component* com)
{
	_com.push_back(com);
}
void Composite::Remove(Component* com)
{
	//	_com.erase(&com);
	std::vector<Component*>::iterator ite = _com.begin();
	for(;ite != _com.end(); ++ite)
	{
		if((*ite) == com)
		{
			ite = _com.erase(ite);
		}
	}
}

Component* Composite::GetChild(int index)
{
	return _com[index];
}

void Composite::Operation()
{
	std::vector<Component*>::iterator ite = _com.begin();
	for(;ite != _com.end(); ++ite)
	{
		(*ite)->Operation();
	}
}

