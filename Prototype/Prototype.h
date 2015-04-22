#ifndef __PROTOTYPE_H_
#define __PROTOTYPE_H_

class Prototype
{
public:
	Prototype();
    virtual	~Prototype();
	virtual Prototype* clone()const = 0;
private:

};

class ConcretePrototype : public Prototype
{
public:
	ConcretePrototype();
    ~ConcretePrototype();
	ConcretePrototype(const ConcretePrototype& prototype);
	Prototype* clone() const;
private:

};
#endif
