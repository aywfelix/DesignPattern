#ifndef __COMMAND_H_
#define __COMMAND_H_
#include "Recver.h"
class Recver;

class Command
{
public:
    Command();
    virtual ~Command();
	virtual void Excute()=0;
};

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Recver* recv);
    ~ConcreteCommand();
	void Excute();
private:
    Recver *_recv;	
};
#endif
