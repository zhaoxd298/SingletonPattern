#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
private:
	static Singleton* uniqueInstance;

	Singleton();
	Singleton(const Singleton&);
	Singleton& operator= (const Singleton&);

public:
	static Singleton* getInstance();
	void print();
	~Singleton();	
};







#endif
