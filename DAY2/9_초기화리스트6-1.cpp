#include <iostream>

int g = 10;

class Point
{
	int x = 0;
	int y = ++g; //�ٽ�. ���� �̷��Դ� ���� ������
					// = 0 ���� literal �ʱ�ȭ�� ����ϼ���.
public:
	Point() {}					// : x(0), y(++g) {}
	Point(int a) : y( a ) {}	// : x(0), y(a) {}
};
int main()
{
	Point p1;
	Point p2(3);

	std::cout << g << std::endl; // ?? ��� �����ϼ��� => 11
									// 10 ? 11 ? 12
}

// Zig ��� :  ���̴� ��� ���� �ȴ�.
//			=> �����Ϸ��� �߰��ϰų� �������� �ʴ´�.
//			=> ���� �Ӻ���� �о߿��� �߰� �ִ� ���.



