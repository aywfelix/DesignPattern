#ifndef __DECORATOR_H_
#define __DECORATOR_H_

class Component
{
public:
    Component();
    virtual ~Component();
	virtual void Opration() = 0;
};

class ConcreteComponent : public Component
{
public:
    ConcreteComponent();
    virtual ~ConcreteComponent();
	void Opration();
	
};

class Decorator : public Component
{
public:
    Decorator(Component* com);
    virtual ~Decorator();
    void Opration();
protected:
	Component* _com;
};

class ConcreteDecorator : public Decorator
{
public:
    ConcreteDecorator(Component* com);
    virtual ~ConcreteDecorator();
	void Opration();
    void  AddBehivior();
};
#endif
