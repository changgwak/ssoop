﻿// 4_상수멤버함수1.cpp    105 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// 상수 멤버 함수(const member function)
	// => 멤버 함수 () 뒤에 const 를 붙이는 문법
	// => 멤버 함수 내부에서 멤버 데이타를 수정하지 않겠다는 약속
	// => 핵심 : 상수객체는 상수 멤버 함수만 호출할수 있다.

	void print() const 
	{	
//		x = 100; // error. 상수 멤버 함수 안에서는 멤버 데이타 수정 안됨
		std::cout << x << ", " << y << std::endl;
	}
};
int main() 
{
	const Point p(1, 2);

	p.x = 10;		// error. x는 public 에 있지만 상수 이므로

	p.set(10, 20);	// error. 
	
	p.print();		// error. 
					// 단, print() 가 상수 멤버 함수라면 호출 가능
}

// 결국 상수 멤버 함수는
// => 객체가 상수 일때를 고려해서 만드는 것!
// => 상수 객체라도 읽을수는 있게 하기 위해서. 
