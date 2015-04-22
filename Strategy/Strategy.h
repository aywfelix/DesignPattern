#ifndef __STRATEGY_H_
#define __STRATEGY_H_

class Strategy
{
public:
    Strategy();
    virtual ~Strategy();
	virtual void AlgrithmInterface()=0;
};

class Sub1Strategy : public Strategy
{
public:
    Sub1Strategy();
    virtual ~Sub1Strategy();
	void AlgrithmInterface();
};

class Sub2Strategy : public Strategy
{
public:
    Sub2Strategy();
    virtual ~Sub2Strategy();
	void AlgrithmInterface();
};
#endif
