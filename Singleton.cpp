#include <iostream>

#include "Singleton.h"

using namespace std;

Singleton* Singleton::uniqueInstance = NULL;

Singleton::Singleton()
{

}

Singleton::~Singleton()
{
	delete uniqueInstance;
	uniqueInstance = NULL;
}

Singleton* Singleton::getInstance()
{
	if (NULL == uniqueInstance) {
		uniqueInstance = new Singleton();
	}

	return uniqueInstance;
}


void Singleton::print()
{
	cout << "I'm Singleton Pattern!" << endl;
}

int main()
{
	Singleton* singleton = Singleton::getInstance();

	singleton->print();
}