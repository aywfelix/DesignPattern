#include "Template.h"

int main(int argc, char *argv[])
{
    AbstractTemp *at = new Sub1();
	AbstractTemp *at2 = new Sub2();
    at->TemplateMethod();
	at2->TemplateMethod();
    return 0;
}
