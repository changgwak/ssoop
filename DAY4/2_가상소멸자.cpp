// 148 page ~
#include <iostream>

// 핵심 : 상속 문법을 사용한다면
//        기반 클래스의 소멸자는 "반드시 virtual" 로 하세요
//        => 가상 소멸자 라고 불리는 문법 입니다.

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d;		// ok. 문제 없음

//	Derived* p = new Derived;
//	delete p;		// ok. 문제 없음
		

	// 아래 코드가 문제 입니다.
	Base* p = new Derived;	// 1. sizeof(Derived) 크기 메모리할당
							// 2. 생성자 호출

	delete p;	// 1. 소멸자 호출  ( p->소멸자() )
				// 2. 메모리 해지
	//-------------------------------------
	// 소멸자 호출도 결국 함수의 호출 입니다.
	// p->소멸자()
	// 
	// 1. 함수 호출시, static binding 할지 dynamic binding 할지 결정해야 합니다.
	// 2. 컴파일러는 p 자체의 타입만 알기 때문에, 
	//    p 의 타입인 Base 클래스의 소멸자가 가상인지 아닌지 조사합니다.

	// Base 소멸자가 가상이 아니면 : static binding 
	//							   포인터 타입으로 호출하므로
	//							   ~Base() 만 호출됨.!
	// 
	// Base 소멸자가 가상이 이면   : dynamic binding 
	//							    p가 가리키는 곳을 조사해서 호출 결정
	//								p가 Derived 객체를 가리키면
	//								~Derived() 호출


}