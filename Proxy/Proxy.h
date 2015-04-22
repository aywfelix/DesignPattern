#ifndef __PROXY_H_
#define __PROXY_H_

class Subject
{
public:
    Subject();
    virtual ~Subject();
	virtual void Request();
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();
	void Request();
};

class Proxy
{
public:
    Proxy(Subject* sbj);
    ~Proxy();
    void Request();
private:
	Subject* _sbj;
};
#endif
