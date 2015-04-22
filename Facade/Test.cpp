#include "Facade.h"

int main(int argc, char *argv[])
{
    Facade* fa = new Facade();
	fa->NewSubsystem();
	fa->Operation();
    return 0;
}
