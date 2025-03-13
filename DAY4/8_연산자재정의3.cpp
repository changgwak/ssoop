//  ������������ - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }
};

// ����� �ƴ� �Լ��� ����� operator+() �Լ�
Point operator+(Point p1, Point p2)
{
	Point tmp(p1.x + p2.x, p1.y + p2.y);
	return tmp;
}


int main()
{
	Point p1(1, 1);
	Point p2(2, 2);


	Point p3 = p1 + p2;	
}


