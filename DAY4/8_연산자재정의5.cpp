//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	Point operator+(const Point& p) const
	{
		Point tmp(x + p.x, y + p.y);
		return tmp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	Point tmp(p1.x + p2.x, p1.y + p2.y);
	return tmp;
}



int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;	// error.
						// 멤버 버전 또는 일반 함수 버전 중에서
						// 한개만 제공해야 한다.


	p3.print();
}


