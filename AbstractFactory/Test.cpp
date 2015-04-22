#include <iostream>
#include "AbstractFactory.h"
#include "AbstractProduct.h"
using namespace std;

int main(int argc, char *argv[])
{
	AbstractFactory *AF1 = new ConcreteFactory1();
	AbstractFactory *AF2 = new ConcreteFactory2();
	
	AF1->CreateProductA();
	AF1->CreateProductB();

	AF2->CreateProductA();
	AF2->CreateProductB();
	
    return 0;
}
