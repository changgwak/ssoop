#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};

int main()
{
	// #1. 용어 
	int n = 10; // "변" 하는 "수" 라고 해서 "변수" 라는 용어 사용
	n = 20;

	Rect r = { 1,1,10,10 }; // "변수" 가 아닌 "객체" 라고 합니다.

	// 객체(object) : 세상에 존재하는 모든 것들..

	// int n 의 n 도 메모리에 "존재" 하므로 "객체" 입니다.
	// 어떤언어는 n 도 변수가 아닌 "객체" 라는 용어 사용
	// C++ 관례
	// primitive type 을 메모리에 생성한것 : 변수
	// user define type을 메모리에 생성한것 : 객체 라고 부릅니다.



	// #2. 메모리 layout
	// => 스택에는 멤버 데이타만 객체당 한개씩 생성됩니다.
	// => 멤버 함수는 코드메모리에 한개씩만 존재 
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16
}
