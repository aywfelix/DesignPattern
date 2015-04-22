#ifndef __FLYWEIGHTFACTORY_H_
#define __FLYWEIGHTFACTORY_H_

#include "Flyweight.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Flyweight;
class FlyweightFactory
{
public:

    FlyweightFactory();
    virtual ~FlyweightFactory();
	Flyweight* getFlyweight(const string& key);
private:
	vector<Flyweight*> _Fly;
};

#endif
