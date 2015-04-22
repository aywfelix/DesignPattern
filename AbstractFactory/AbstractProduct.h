#ifndef __ABSTRACTPRODUCT_H_
#define __ABSTRACTFACTORY_H_

class AbstractProductA
{
public:
    AbstractProductA();
    virtual ~AbstractProductA()=0;

};

class AbstractProductB
{
public:
    AbstractProductB();
    virtual ~AbstractProductB()=0;
};

class ProductA1 : public AbstractProductA
{
public:
	ProductA1();
	~ProductA1();
};

class ProductA2 : public AbstractProductA
{
public:
    ProductA2();
    ~ProductA2();
};

class ProductB1 : public AbstractProductB
{
public:
    ProductB1();
    ~ProductB1();
};

class ProductB2 : public AbstractProductB
{
public:
    ProductB2();
    ~ProductB2();
};

#endif
