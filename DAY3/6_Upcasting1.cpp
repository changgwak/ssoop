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
	Animal  a;
	Dog     dog;

	Dog*    p1 = &dog; // ok

//	int*    p2 = &dog; // error
	
	// #1. upcasting
	// => 파생 클래스 주소는 기반 클래스 포인터 타입으로 암시적 형변환 가능하다.
	// => 기반 클래스 포인터로 파생 클래스 객체 가리킬수 있다.
	// => 가능한 이유는 메모리 그림을 생각해 보세요
	Animal* p3 = &dog; // ok

	// #2. 컴파일러는 컴파일 시간에는 p3가 가리키는 곳에 어떤 객체가 있는지
	//     알수 없다.
	// => 아래 같은 코드가 있다면 실행시 대상체가 변경될수 있으므로
//	if (사용자 입력 == 1) p3 = &a;


	// #3. Animal* 인 p3 를 가지고는 Animal 에서 파생된 멤버만 접근 가능
	//     Dog 가 추가한 멤버는 접근 안됨

	p3->age = 10;	// ok
	p3->color = 10; // error
}




