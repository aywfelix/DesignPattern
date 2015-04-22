#include "FlyweightFactory.h"
#include "Flyweight.h"

int main(int argc, char *argv[])
{
    FlyweightFactory * ffc = new FlyweightFactory();
	Flyweight *fw1 = ffc->getFlyweight("hello");
	Flyweight *fw2 = ffc->getFlyweight("world");
    Flyweight *fw3 = ffc->getFlyweight("hello");
    return 0;
}
