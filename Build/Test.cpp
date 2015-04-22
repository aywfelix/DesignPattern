#include "Director.h"
#include "Build.h"
#include "Product.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	Product* product = new Product();
	Build *build = new ConcreteBuild(product);
    Director *directot = new Director(build);
	directot->Construct();
	vector<string>::iterator ite;
	for(ite = product->vec.begin();ite != product->vec.end(); ++ite)
	{
		cout << *ite << endl;
	}
    return 0;
}
