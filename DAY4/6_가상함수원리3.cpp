#include <iostream>

//가상함수 원리   153page ~

class Animal
{
	int age;
public:
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
class Dog : public Animal
{
	int color;
public:
	void Cry() override {}
};

int main()
{
	Animal a;
	Dog    d;
	
	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(d) << std::endl;
}


