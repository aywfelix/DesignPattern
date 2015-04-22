#include "Decorator.h"

int main(int argc, char *argv[])
{
    Component* com = new ConcreteComponent();
	Decorator *dec = new ConcreteDecorator(com);
	dec->Opration();
    return 0;
}
