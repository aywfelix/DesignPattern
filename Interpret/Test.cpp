#include "Context.h"
#include "Interpret.h"

int main(int argc, char *argv[])
{
	
    Context con;
	AbstractExpress *absterm = new TermExpress("hello world");
	AbstractExpress *absnorm = new NormExpress(absterm, 2);
	absnorm->Interpret(con);
    return 0;
}
