#ifndef __ADAPTER_H_
#define __ADAPTER_H_

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request() = 0;
};

class Adaptee
{
public:
    Adaptee();
    virtual ~Adaptee();
	void SpecialRequest();
};

class Adapter : public Target
{
public:
	Adapter(Adaptee* adaptee);
	~Adapter();
	void Request();
private:
	Adaptee* _adaptee;
};
#endif
