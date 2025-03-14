
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void draw_line(const Point& from, const Point& to) {}

int main()
{
	// draw_line �Լ��� (1, 1) ~ (5, 5) �� ���� �׷�������

	Point p1(1, 1);
	Point p2(5, 5);

	draw_line(p1, p2); 

	// p1, p2 �� ���̻� �ʿ� �����ϴ�. ��� �ı� �Ǿ������ ??

	// �ٽ� : �Լ� ���ڷθ� ����� ��ü�� �ʿ��ϸ�
	//		  �ӽð�ü(temporary)�� �����ϴ� ���� ȿ�����Դϴ�.
	draw_line( Point(1, 1), Point(5, 5) );
}





