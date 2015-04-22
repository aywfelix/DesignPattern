#include "Adpater.h"

int main(int argc, char *argv[])
{
    Adaptee* adpee = new Adaptee();
	Adapter* adp = new Adapter(adpee);
	adp->Request();
    return 0;
}
