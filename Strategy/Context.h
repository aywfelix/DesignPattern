#ifndef __CONTEXT_H_
#define __CONTEXT_H_
#include "Strategy.h"

class Strategy;
class Context
{
public:
    Context(Strategy* strategy);
    virtual ~Context();
	void DoAction();
private:
	Strategy *_strategy;
};
#endif
