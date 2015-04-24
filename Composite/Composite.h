#ifndef __COMPOSITE_H
#define __COMPOSITE_H

#include <vector>

class Component
{
public:
    Component();
    virtual ~Component();
	virtual void AddCom(Component* com);
	virtual void Remove(Component* com);
	virtual Component* GetChild(int index);
	virtual void Operation();
};


class Composite : public Component
{
public:
    Composite();
    virtual ~Composite();
	void AddCom(Component* com);
	void Remove(Component* com);
	Component* GetChild(int index);
	void Operation();
private:
	std::vector<Component*> _com;
};
#endif
