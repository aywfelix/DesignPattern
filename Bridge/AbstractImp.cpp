#include "AbstractImp.h"
#include <iostream>
using namespace std;

AbstractImp::AbstractImp()
{}

AbstractImp::~AbstractImp()
{}

ConcretAbstractImpA::ConcretAbstractImpA()
{}

ConcretAbstractImpA::~ConcretAbstractImpA()
{}

ConcretAbstractImpB::ConcretAbstractImpB()
{}

ConcretAbstractImpB::~ConcretAbstractImpB()
{}

void ConcretAbstractImpA::opration()
{
	cout<< "ConcretAbstractImpA\n";
}

void ConcretAbstractImpB::opration()
{
	cout<<"ConcretAbstractImpB\n";
}
