// 4_�������Լ�1.cpp    105 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	// ��� ��� �Լ��� ��Ȯ�� �ǹ�!

	void set(int a, int b)	// void set(Point* this, int a, int b)
	{ 
		x = a; 
		y = b; 
	}
//	void print()			// void print(Point* this)
	void print() const		// void print(const Point* this)
	{
//		x = 100; // this->x = 100 �ε�
			     // this �� const Point* �̹Ƿ� ����ȵ�

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(1, 2);
	p.set(10, 20);	// set(&p, 10, 20);  error
	p.print();		// print(&p);

}

