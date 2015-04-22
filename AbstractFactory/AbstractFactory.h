#ifndef __ABSTRACTFACTORY_H_ 
#define __ABSTRACTFACTORY_H_

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();
	virtual AbstractProductA* CreateProductA()=0;
	virtual AbstractProductB* CreateProductB()=0;
	
};

class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
};

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();
    virtual ~ConcreteFactory2();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
};

#endif
