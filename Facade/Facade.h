#ifndef __FACADE_H_
#define __FACADE_H_

class SubSystem1
{
public:
    SubSystem1();
    virtual ~SubSystem1();
	void Operation();
};

class SubSystem2
{
public:
    SubSystem2();
    virtual ~SubSystem2();
	void Operation();
};

class Facade
{
public:
    Facade();
	void NewSubsystem();
    virtual ~Facade();
	void Operation();
private:
	SubSystem1 *_sub1;
	SubSystem2 *_sub2;
};

#endif
