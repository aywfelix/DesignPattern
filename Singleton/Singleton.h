#ifndef __SINGLETON_H_
#define __SINGLETON_H_

class Singleton
{
public:
	static Singleton* _instance;
	static Singleton* Instance();
private:
	Singleton();
};

#endif
