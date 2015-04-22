#include "Invoker.h"

Invoker::Invoker()
{}

Invoker::~Invoker()
{}

void Invoker::SetCommand(Command *cmd)
{
	_cmd = cmd;
}

void Invoker::DoAction()
{
	_cmd->Excute();
}
