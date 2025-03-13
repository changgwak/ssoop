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

	// #1. p 는 Animal* 이므로 Animal 클래스에서
	//     Cry 가 가상인지 아닌지 조사
	// 가상이 아니면 : 무조건 Animal Cry 호출

	// 가상이면, 몇번째 가상함수인지 순서를 조사
	// 그리고, 아래 의미의 기계어 코드 생성

//	p->vtptr[1](); 라는 의미의 기계어 코드 생성 

}


