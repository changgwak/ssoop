//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// 멤버 함수로 만든 operator+
	// + 은 이항연산자 이지만 멤버 함수로 만들면 인자가 한개가 됩니다.
	// "p1 + p2" 에서 p1이 const 라도 호출가능해야 합니다.
	// => const member function 으로!
	Point operator+(const Point& p) const
	{
		Point tmp(x + p.x, y + p.y);
		return tmp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// p1.operator+(p2)


	p3.print();
}


