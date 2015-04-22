#include "Context.h"
#include "State.h"
#include <cstdio>
#include <cstdlib>
int main(int argc, char *argv[])
{
    State* stA = new ConcreteStateA();
	State* stB = new ConcreteStateB();
	Context* con = new Context(stA);
	con->OperationInterface();
	con->ChangeState(stB);
	con->OperationInterface();
	con->ChangeState(stA);
	con->OperationInterface();
	if(con != NULL)
	{
		delete con;
		con = NULL;
	}
		
	if(stA != NULL)
	{
		delete stA;
		stA = NULL;			
	}	
	if(stB != NULL)
	{
		delete stB;
		stB = NULL;			
	}	
	
    return 0;
}
