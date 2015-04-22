#include "Abstract.h"
#include "AbstractImp.h"

int main(int argc, char *argv[])
{
    AbstractImp *imp = new ConcretAbstractImpA();
	Abstract *abs = new RedifinedAbstract(imp);
	abs->opration();
	
    return 0;
}
