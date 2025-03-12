// 6_Upcasting1.cpp      140 page ~
#include <vector>

// 지금 문법 부터.. 객체지향 디자인의 시작,.. 따라서 아주 중요한 개념

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Dog     dog;

	Dog*    p1 = &dog; // ok

//	int*    p2 = &dog; // error
	
	// #1. upcasting
	// => 파생 클래스 주소는 기반 클래스 포인터 타입으로 암시적 형변환 가능하다.
	// => 기반 클래스 포인터로 파생 클래스 객체 가리킬수 있다.
	// => 가능한 이유는 메모리 그림을 생각해 보세요
	Animal* p3 = &dog; // ok
}




