//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 연산자 재정의 원리
	// 1. 피연산자 2개가 모두 primitive type 이면 "언어에서 정의한 연산수행"
	//    => 3 + 4
	// 
	// 2. 피연산자 중 한개라고 user define type 이면 약속된 함수 호출

	Point p3 = p1 + p2;


}


