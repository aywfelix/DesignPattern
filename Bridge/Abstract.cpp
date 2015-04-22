#include "Abstract.h"
#include "AbstractImp.h"
#include <iostream>
using namespace std;

Abstract::Abstract()
{}

Abstract::~Abstract()
{}

RedifinedAbstract::RedifinedAbstract(AbstractImp* imp)
{
	_imp = imp;
}

RedifinedAbstract::~RedifinedAbstract()
{}

void RedifinedAbstract::opration()
{
	cout << "redifinedAbstract option\n";
	_imp->opration();
}
