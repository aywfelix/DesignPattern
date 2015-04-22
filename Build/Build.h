#ifndef __BUILD_H_
#define __BUILD_H_

class Product;

class Build
{
public:
    Build();
    virtual ~Build();
	virtual void BuildPartA()=0;
	virtual void BuildPartB()=0;
	virtual void BuildPartC()=0;
	virtual Product* GetProduct()=0;
};

class ConcreteBuild : public Build
{
public:

    ConcreteBuild(Product* product);
    ~ConcreteBuild();
	void BuildPartA();
	void BuildPartB();
	void BuildPartC();
	Product* GetProduct();
private:
	Product* _product;
};

#endif
