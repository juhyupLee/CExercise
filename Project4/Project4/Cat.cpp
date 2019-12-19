#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(const char* name)
	: Animal(name)
{

}

Cat::~Cat()
{
}

void Cat::PrintName() const
{
	cout << "I'am a cat named" << endl;

}

