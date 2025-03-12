﻿// 4_상수멤버함수1.cpp    105 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }


	// 상수 멤버 함수는 선언과 구현 모두에 표기해야 합니다. - 109 page
	// => 앞으로 다양한 문법 배울때, 선언과 구현으로 분리시
	//    어떻게 표기하는지 알아야 합니다.
	// 디폴트 파라미터 : 선언에만 표기
	// 상수 멤버함수   : 선언과 구현에 모두 표기
	void print() const;
};

void Point::print() const 
{
	std::cout << x << ", " << y << std::endl;
}


int main()
{
}

