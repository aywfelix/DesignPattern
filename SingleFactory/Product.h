#ifndef __PRODUCT_H_
#define __PRODUCT_H_

class Product
{
public:
    Product();
    virtual ~Product() = 0;
};

class ConcreteProduct : public Product
{
public:
	ConcreteProduct();
	~ConcreteProduct();
};
#endif
