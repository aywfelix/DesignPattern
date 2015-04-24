#include "Handle.h"

int main(int argc, char *argv[])
{
    Handle *handleA = new ConcreteHandleA();
	Handle *handleB = new ConcreteHandleB();
 
	handleA->SetSuccessor(handleB);
	handleA->HandleRequest();

    return 0;
}
