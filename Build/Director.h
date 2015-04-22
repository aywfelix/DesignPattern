#ifndef __DIRECTOR_H_
#define __DIRECTOR_H_

class Build;

class Director
{
public:
    Director(Build* build);
    virtual ~Director();
	void Construct();
private:
	Build* _build;
};
#endif
