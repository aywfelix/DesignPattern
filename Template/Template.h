#ifndef __TEMPLATE_H_
#define __TEMPLATE_H_

class AbstractTemp
{
public:
    AbstractTemp();
	void TemplateMethod();
    virtual ~AbstractTemp();
	virtual void Permissive1()=0;
	virtual void Permissive2()=0;
};

class Sub1 : public AbstractTemp
{
public:
    Sub1();
    ~Sub1();
	void Permissive1();
	void Permissive2();
};

class Sub2 : public AbstractTemp
{
public:
    Sub2();
    virtual ~Sub2();
	void Permissive1();
	void Permissive2();
};

#endif
