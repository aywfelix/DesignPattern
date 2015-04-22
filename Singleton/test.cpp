#include "Singleton.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Singleton *single = Singleton::Instance();
	Singleton *single2 = Singleton::Instance();

	if(single == single2)
	{
		std::cout << "the singleton example\n";
	}
    return 0;
}
