#include <iostream>

class Point
{
	int x, y;
public:
	// this 활용 #1. 이름 충돌이 있거나 또는 멤버 데이타임을 명확히 하기 위해
	void set(int x, int y) 
	{
		this->x = x;	
		this->y = y;
	}
	// this 활용 #2. this 또는 *this 를 반환하는 멤버 함수
	// => 멤버 함수의 호출을 연속적으로 할수 있습니다.
	Point* foo() { return this; }
	Point& goo() { return *this; }

};
int main()
{
	Point p1;
	p1.set(10, 20);

	p1.foo()->foo()->foo();
	p1.goo().goo().goo();

	// std::cout 의 원리가 *this 반환 입니다 - 내일 오후에 만들게 됩니다.
	std::cout << "A" << "B" << "C";

	// cout.operator<<("A").operator<<("B").operator<<("C")

	// java 의 빌더 라는 기술
//	Person p;
//	p.set_name("kim").set_age(20).set_weight(60);
	
	// C++
//	p.set("kim", 20, 60);
//	p.set("kim");
}
