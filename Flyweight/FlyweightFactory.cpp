#include "FlyweightFactory.h"

FlyweightFactory::FlyweightFactory()
{}

FlyweightFactory::~FlyweightFactory()
{}

Flyweight* FlyweightFactory::getFlyweight(const string& key)
{
	vector<Flyweight*>::iterator ite = _Fly.begin();
	string str;
    for(;ite != _Fly.end(); ++ite)
	{
		str = (*ite)->getIntrinsicState();
		if(str == key)
		{
			return *ite;
	    } 
	}
	Flyweight* fn = new ConcreteFlyweight(key);
	_Fly.push_back(fn);
	return fn;
}
