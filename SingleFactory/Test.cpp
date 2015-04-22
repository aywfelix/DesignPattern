#include "Product.h"
#include "Factory.h"
#include <iostream>
using namespace  std;

int main(int argc, char *argv[])
{
    Factory *f = new ConcreteFactory;
	Product *p = f->CreateProduct(); 
    return 0;
}

