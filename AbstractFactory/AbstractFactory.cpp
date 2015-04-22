#include "AbstractFactory.h"
#include "AbstractProduct.h"

AbstractFactory::AbstractFactory()
{}

AbstractFactory::~AbstractFactory()
{}

ConcreteFactory1::ConcreteFactory1()
{}

ConcreteFactory1::~ConcreteFactory1()
{}

ConcreteFactory2::ConcreteFactory2()
{}

ConcreteFactory2::~ConcreteFactory2()
{}

AbstractProductA* ConcreteFactory1::CreateProductA()
{
	return new ProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB()
{
	return new ProductB1();
}

AbstractProductA* ConcreteFactory2::CreateProductA()
{
	return new ProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB()
{
	return new ProductB2();
}
