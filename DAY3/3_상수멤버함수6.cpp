// 4_상수멤버함수1.cpp    105 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	// 상수 멤버 함수의 정확한 의미!

	void set(int a, int b) 
	{ 
		x = a; 
		y = b; 
	}

	void print() 
	{
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(1, 2);

	p.set(10, 20);	// error. 
	p.print();		// error. 

}

