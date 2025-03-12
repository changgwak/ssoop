// explicit_object_parameter.cpp - 102 page

// �������Լ�1 ����


#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}


	void set1(int a, int b) 
	{ 
		x = a; 
		y = b; 
	}

	// C++23 ���� this �� �Ͻ������� �߰��Ǵ� �� ����
	// �Ʒ� ó�� ��������� �������� �ֽ��ϴ�.
	// "explicit object parameter" ��� ����
	void set2(this Point& self, int a, int b)
	{
		self.x = a;
		self.y = b;
	}
	void print1() const
	{
		std::cout << x << ", " << y << std::endl;
	}
	// ��� ����Լ��� explicit object parameter�� �Ʒ� ó��
	void print1(this const Point& self) 
	{
		std::cout << self.x << ", " << self.y << std::endl;
	}
};
int main()
{
	Point p(1, 2);
	p.set1(10, 20);	
	p.set2(10, 20);
	p.print1();		
	p.print2();
}
