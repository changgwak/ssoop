// 7_가상함수1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override   : 기반 클래스 함수를 파생클래스가 다시 만드는것
	// function overlading : 인자가 다르면 동일이름함수 2개만들수 있다. 
	//				          square(int), square(double)
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); 
	Dog    d; d.Cry1(); 

	Animal* p = &d;		

	p->Cry1();
}

