#include <iostream>

int g = 10;

class Point
{
	int x = 0;
	int y = ++g; �ٽ�
public:
	Point() {}
	Point(int a) : y( a ) {}
};
int main()
{
	Point p1;
	Point p2(3);

	std::cout << g << std::endl; // ?? ��� �����ϼ���
}




