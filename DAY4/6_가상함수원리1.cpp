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
	void Cry() override  {}
};

int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;
	p->Cry();  // 가상함수 이므로 dynamic binding
			   // 객체가 Dog 이므로 Dog Cry 호출
			   // 원리를 생각해 봅시다.
}


