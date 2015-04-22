#include "Proxy.h"

int main(int argc, char *argv[])
{
    Subject *sbj = new ConcreteSubject();
	Proxy *p = new Proxy(sbj);
	p->Request();
    return 0;
}
