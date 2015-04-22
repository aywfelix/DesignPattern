#include "Product.h"

Product::Product()
{}

Product::~Product()
{}

void Product::AddPart(const string& str)
{
	vec.push_back(str);
}
