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

// 1. p 가 가리키는 곳에 어떤 타입의 객체가 있는지 어떻게 알수 있을까 ?
// 2. 조사했다고 가정해도 어떻게 Dog Cry() 를 호출할까 ?
//    => Dog Cry() 를 호출하려면 주소를 알아야 한다.

