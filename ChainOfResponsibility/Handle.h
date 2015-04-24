#ifndef __HANDLE_H_
#define __HANDLE_H_

class Handle
{
public:
    Handle();
	Handle(Handle* handle);
    virtual ~Handle();
	void SetSuccessor(Handle* succ);
    Handle* GetSuccessor();
	virtual void HandleRequest()=0;
private:
	Handle* _succ;
};

class ConcreteHandleA : public Handle
{
public:
    ConcreteHandleA();
    virtual ~ConcreteHandleA();
    ConcreteHandleA(Handle* succ);
	void HandleRequest();
};

class ConcreteHandleB : public Handle
{
public:
    ConcreteHandleB();
	ConcreteHandleB(Handle* succ);
    virtual ~ConcreteHandleB();
	void HandleRequest();
};
#endif
