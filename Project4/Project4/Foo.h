#pragma once
class Foo
{
public:
	Foo(int x);
	virtual ~Foo();
	Foo operator+(const Foo& other);

private:
	int mX;

};