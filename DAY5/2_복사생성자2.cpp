// 2_���������1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}  
	Point(int a, int b) : x(a), y(b) {}  

	// ���� ȣ��Ǵ��� Ȯ���� ���ؼ� ���� �����ڿ��� �α�...
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {} 
void f2(Point& p) {} 

int main()
{
	Point p1(1, 2);		

	// ���� �����ڰ� ���Ǵ� ��� 3����
	// #1. �ڽŰ� ������ Ÿ���� ��ü�� �ʱ�ȭ �ɶ�
	Point p2(p1); 
	Point p3 = p1;
}




//------------------------

Point pt(1, 1);

Point  f3() { return pt; }						  
Point& f4() { return pt; } 