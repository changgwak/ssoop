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

void f1(Point  p) {} // call by value : ���纻 ����
void f2(Point& p) {} // call by reference : ���纻 ���� �ȵ�


Point pt(1, 1);

Point  f3()		// return by value
{
	return pt;	// pt �� �����ϴ� ���� �ƴմϴ�.
	// ���纻�� ��������� ���� �˴ϴ�.
}

Point& f4() { return pt; }

int main()
{
	Point p1(1, 2);		

	// ���� �����ڰ� ���Ǵ� ��� 3����
	// #1. �ڽŰ� ������ Ÿ���� ��ü�� �ʱ�ȭ �ɶ�
//	Point p2(p1); 
//	Point p3 = p1;


	// #2. �Լ� ���ڷ� call by value �� ����Ҷ�(���纻 ����)
//	f1(p1); // call by value. "Point p = p1" �� �ǹ�!!
			// ��, ���纻 ���鶧 ���� ������ ȣ��

//	f2(p1); // call by reference �̹Ƿ� ���纻 ���� �ȵ�


	// #3. �Լ��� ��ü�� ������ ��ȯ �Ҷ�
	f3();
}
//------------------------

