﻿// 상속과 생성자.   136page ~
#include <iostream>

class Base
{
	int data1 = 0;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};
class Derived : public Base
{
	int data2 = 0;
public:
	Derived()       { std::cout << "Derived()" << std::endl; } 
	Derived(int a)  { std::cout << "Derived(int)" << std::endl; }
	~Derived()      { std::cout << "~Derived()" << std::endl; }
};

int main()
{
	Derived d;	
//	Derived d(5);
}




