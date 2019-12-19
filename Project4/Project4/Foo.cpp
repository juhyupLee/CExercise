#include "Foo.h"

Foo::Foo(int x)
	: mX(x)
{
}

Foo::~Foo()
{
}

Foo Foo::operator+(const Foo& other)
{
	int x = (mX + other.mX) * 2;
	Foo temp(x);
	return temp;

}
