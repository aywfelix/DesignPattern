#include "Memento.h"
#include "Originator.h"

int main(int argc, char *argv[])
{
    Originator* o = new Originator();
	o->SetState("old");
	o->Print();
    Memento* mem = o->CreateMemento();
	o->SetState("new");
	o->Print();
	o->SetMemento(mem);
	o->RestoreMemento(mem);
	o->Print();
    return 0;
}
