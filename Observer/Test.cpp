#include "Observer.h"
#include "Subject.h"

int main(int argc, char *argv[])
{
    Subject * sj = new ConcreteSubject();
	Observer* oba = new ConcreteObserverA(sj);
	Observer* obb = new ConcreteObserverB(sj);
	string str1 = "haha";
	string str2 = "hehe";
	sj->SetState(str1);
	sj->Notify();
	sj->SetState(str2);
	sj->Notify();
    return 0;
}
