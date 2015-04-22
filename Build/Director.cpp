#include "Director.h"
#include "Build.h"

Director::Director(Build* build)
{
	_build = build;
}

Director::~Director()
{}

void Director::Construct()
{
	_build->BuildPartA();
	_build->BuildPartB();
	_build->BuildPartC();
}
