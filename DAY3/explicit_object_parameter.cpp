// explicit_object_parameter.cpp - 102 page

// 상수멤버함수1 복사


#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b) 
	{ 
		x = a; 
		y = b; 
	}

	void print() const
	{
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	Point p(1, 2);
	p.set(10, 20);	
	p.print();		
}
