// 2_���������1.cpp
#include <iostream>

// 124 page ~ 

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2
};

int main()
{
	// �Ʒ� 4�ٿ� ���ؼ� ������ ���ô�.
	Point p1;		// ok. 1�� ������ ȣ��
//	Point p2(1);    // error. ���ڰ� �Ѱ��� �����ڴ� ����
	Point p3(1,2);	// ok. 2�� ������ ȣ��
	Point p4(p3);   
}