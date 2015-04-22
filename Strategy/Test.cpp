#include "Context.h"
#include "Strategy.h"

int main(int argc, char *argv[])
{
    Strategy *strategy = new Sub1Strategy();
	Strategy *strategy2 = new Sub2Strategy();
	Context *con = new Context(strategy);
	con->DoAction();
	Context *con2 = new Context(strategy2);
	con2->DoAction();
    return 0;
}
