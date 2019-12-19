#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(const char* name);
	~Cat();
	void PrintName() const;
};