#include "Composite.h"

int main(int argc, char *argv[])
{
    Component *com = new Component;
	Component *com2 = new Component;
	Composite *coms = new Composite;
	coms->AddCom(com);
	coms->AddCom(com2);
	coms->Operation();
	coms->Remove(com);
	coms->Operation();
    return 0;
}
