#include "Product.h"
#include "Build.h"

Build::Build()
{}
Build::~Build()
{}

ConcreteBuild::ConcreteBuild(Product* product)
{
	_product = product;
}

ConcreteBuild::~ConcreteBuild()
{}

void ConcreteBuild::BuildPartA()
{
	_product->AddPart(string("Head"));
}

void ConcreteBuild::BuildPartB()
{
	_product->AddPart(string("Body"));
	
}

void ConcreteBuild::BuildPartC()
{
	_product->AddPart(string("Leg"));
}

Product* ConcreteBuild::GetProduct()
{
	return _product;
}
