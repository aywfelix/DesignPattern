#ifndef __ABSTRACT_H_
#define __ABSTRACT_H_

class AbstractImp;
class Abstract
{
public:
    Abstract();
    virtual ~Abstract();
	virtual void opration()=0;
};

class RedifinedAbstract : public Abstract
{
public:
    RedifinedAbstract(AbstractImp* imp);
    virtual ~RedifinedAbstract();
	void opration();
private:
	AbstractImp* _imp;
};
#endif
