// 4_�������Լ�1.cpp    105 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	// ��� ��� �Լ��� ��Ȯ�� �ǹ�!

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

