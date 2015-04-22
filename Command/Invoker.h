#ifndef __INVOKER_H_
#define __INVOKER_H_

#include "Command.h"
class Command;

class Invoker
{
public:
    Invoker();
	void SetCommand(Command* cmd);
	void DoAction();
    ~Invoker();
private:
	Command *_cmd;
};
#endif
