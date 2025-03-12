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
	Animal a; a.Cry1(); // Animal Cry1
	Dog    d; d.Cry1(); // Dog    Cry1

	Animal* p = &d;		

	// 실제 객체는 Dog, 
	// 포인터 타입은 Animal*
	p->Cry1(); // ?
}

// 150p 내용입니다.

// p->Cry1() 을 어떤 함수와 연결할것인가 ?
// => 함수 바인딩(function binding) 이라고 합니다.

// #1. static binding : 컴파일 시간에 컴파일러가 함수 호출을 결정한다.
//				        컴파일러는 p가 가리키는 객체의 타입을 알수 없다.
//						컴파일러는 p자체의 타입이 "Animal*" 라는 것만 알수 있다.
//					    따라서 컴파일러가 결정하면 "Animal Cry1" 호출			

// 빠르지만 논리적이지는 않다.
// C#/C++ 언어의 기본 바인딩 정책

// #2. dynamic binding : 컴파일 시간에는 p가 가리키는 메모리를 조사하는 기계어코드
//				         생성.
//						 실행시에 p가 가리키는 메모리를 조사해서 어떤타입인지 조사후
//						호출을 결정.
//						p 가 가리키는 곳에 Dog 가 있었다면 "Dog Cry1" 호출

// 논리적이지만 느리다.
// Java, Ptyhon, SWift 등 대부분의 객체지향 언어가 사용하는 방식
// C#/C++ 언어의 가상함수(virtual function)



