#include "Strategy.h"
#include <iostream>
using namespace std;


Strategy::Strategy()
{}

Strategy::~Strategy()
{}

Sub1Strategy::Sub1Strategy()
{}

Sub1Strategy::~Sub1Strategy()
{}

void Sub1Strategy::AlgrithmInterface()
{
	cout << "Sub1Strategy::AlgrithmInterface" <<endl;
}
Sub2Strategy::Sub2Strategy()
{}

Sub2Strategy::~Sub2Strategy()
{}

void Sub2Strategy::AlgrithmInterface()
{
	cout << "Sub1Strategy::AlgrithmInterface" <<endl;
}



