#include "AbstractProduct.h"
#include <iostream>
using namespace std;

AbstractProductA::AbstractProductA()
{}

AbstractProductA::~AbstractProductA()
{}

AbstractProductB::AbstractProductB()
{}

AbstractProductB::~AbstractProductB()
{}

ProductA1::ProductA1()
{
	cout << "productA1\n";
}

ProductA1::~ProductA1()
{}

ProductA2::ProductA2()
{
	cout << "productA2\n";
}

ProductA2::~ProductA2()
{}

ProductB1::ProductB1()
{
	cout << "productB1\n";
}

ProductB1::~ProductB1()
{}

ProductB2::ProductB2()
{
	cout << "productB2\n";
}

ProductB2::~ProductB2()
{}

