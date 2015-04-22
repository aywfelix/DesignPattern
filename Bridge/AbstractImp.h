#ifndef __ABSTRACTIMP_H_
#define __ABSTRACTIMP_H_

class AbstractImp;
class AbstractImp
{
public:
	AbstractImp();
    virtual ~AbstractImp();
	virtual void opration()=0;
private:

};

class ConcretAbstractImpA : public AbstractImp
{
public:
    ConcretAbstractImpA();
    ~ConcretAbstractImpA();
	void opration();
private:

};

class ConcretAbstractImpB : public AbstractImp
{
public:
    ConcretAbstractImpB();
    ~ConcretAbstractImpB();
    void opration();
private:

};
#endif
