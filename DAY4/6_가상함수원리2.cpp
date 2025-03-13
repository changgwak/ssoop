#include <iostream>

// 가상함수를 사용하면 컴파일러가 아래와 같이 많은 코드를 추가 합니다.

void* animal_vtable[] = { Animal_TYPE_INFO, &Animal::Cry, &Animal::Run  };

class Animal
{
	void* vtptr = animal_vtable;  // <= 컴파일러가 추가한 멤버

	int age;
public:
	virtual void Cry() {}
	virtual void Run() {}
};


//--------------------
void* dog_vtable[] = { Dog_TYPE_INFO, &Dog::Cry, &Animal::Run };

class Dog : public Animal
{
	void* vtptr = dog_vtable;

	int color;
public:
	void Cry() override {}
};
//-----------------------------------------------------
int main()
{
	Animal a1, a2;
	Dog    d;

	Animal* p = &d;
	p->Cry();  
}


