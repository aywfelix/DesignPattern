#include "Command.h"
#include "Invoker.h"
#include "Recver.h"

int main(int argc, char *argv[])
{
    Recver *recv = new Recver;
	Command *cmd = new ConcreteCommand(recv);
	Invoker *ink = new Invoker;
	ink->SetCommand(cmd);
	ink->DoAction();
	
    return 0;
}
