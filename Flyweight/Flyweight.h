#ifndef __FLYWEIGHT_H_
#define __FLYWEIGHT_H_

#include <string>
using namespace std;

class Flyweight
{
public:
    Flyweight(string intrinsicState);
    virtual ~Flyweight();
	virtual void Operation(const string& extrinsicState);
	string getIntrinsicState();
private:
	string _intrinsicState;
};

class ConcreteFlyweight : public Flyweight
{
public:
    ConcreteFlyweight(string intrinsicState);
    ~ConcreteFlyweight();
	void Operation(const string& extrinsicState);
};
#endif
