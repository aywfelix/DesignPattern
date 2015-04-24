#include "Interpret.h"
#include <iostream>
using namespace std;

AbstractExpress::AbstractExpress()
{}

AbstractExpress::~AbstractExpress()
{}

TermExpress::TermExpress(std::string statement)
{
	_statement = statement;
}

TermExpress::~TermExpress()
{}
void TermExpress::Interpret(const Context& con)
{
	cout <<"TermExpress::Interpret\n";
	cout << _statement << endl;
}

NormExpress::NormExpress(AbstractExpress* absexpress, int times)
{
	_absexpress = absexpress;
	_times = times;
}

NormExpress::~NormExpress()
{}

void NormExpress::Interpret(const Context& con)
{
	if(_absexpress)
	{
		for(int i=0;i<_times;++i)
		{
			_absexpress->Interpret(con);
		}
	}
}
