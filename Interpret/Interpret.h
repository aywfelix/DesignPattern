#ifndef __INTERPRET_H
#define __INTERPRET_H

#include <iostream>
#include <string>
#include "Context.h"
class Context;

class AbstractExpress
{
public:
    AbstractExpress();
    virtual ~AbstractExpress();
	virtual void Interpret(const Context& con)=0;
};

class TermExpress : public AbstractExpress
{
public:
    TermExpress(std::string statement);
    virtual ~TermExpress();
	void Interpret(const Context& con);
private:
	std::string _statement;
};

class NormExpress : public AbstractExpress
{
public:
    NormExpress(AbstractExpress* absexpress, int times);
    virtual ~NormExpress();
	void Interpret(const Context& con);
private:
	AbstractExpress* _absexpress;
	int _times;
};
#endif
