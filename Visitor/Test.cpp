#include "Element.h"
#include "Visitor.h"
#include "Container.h"

int main(int argc, char *argv[])
{
    Container *con = new Container;
	con->Attach(new Employee("lala"));
	con->Attach(new Employee("xixi"));
    Visitor *vis1 = new InComeVisitor();
	Visitor *vis2 = new OutComeVisitor();
	con->Accept(vis1);
	con->Accept(vis2);
    return 0;
}
