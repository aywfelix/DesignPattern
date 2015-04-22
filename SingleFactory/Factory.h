#ifndef __FACTORY_H_
#define __FACTORY_H_

class Product;
class Factory
{
public:
    Factory();
    virtual ~Factory()=0;
	virtual Product* CreateProduct()=0;
};

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    virtual ~ConcreteFactory();
	Product* CreateProduct();
};
#endif


