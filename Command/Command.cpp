#include "Command.h"
#include <iostream>
using namespace std;

Command::Command()
{
	//	_recv = recv;
}

Command::~Command()
{}

ConcreteCommand::ConcreteCommand(Recver* recv)
{
	_recv = recv;
		
}

ConcreteCommand::~ConcreteCommand()
{}

void ConcreteCommand::Excute()
{
	_recv->DoAction();
}
