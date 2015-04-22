#ifndef __PRODUCT_H_
#define __PRODUCT_H_

#include <vector>
#include <iostream>
using namespace std;

class Product
{
public:
	vector<string> vec;
    Product();
    virtual ~Product();
	void AddPart(const string& str);
};
#endif
