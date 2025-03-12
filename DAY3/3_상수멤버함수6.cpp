// 4_상수멤버함수1.cpp    105 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	// 상수 멤버 함수의 정확한 의미!

	void set(int a, int b)	// void set(Point* this, int a, int b)
	{ 
		x = a; 
		y = b; 
	}
//	void print()			// void print(Point* this)
	void print() const		// void print(const Point* this)
	{
//		x = 100; // this->x = 100 인데
			     // this 가 const Point* 이므로 변경안됨

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(1, 2);
	p.set(10, 20);	// set(&p, 10, 20);  error
	p.print();		// print(&p);

}

