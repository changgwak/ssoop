#include <iostream>
// 171 page
// �� ������ �߿��մϴ�. �˾� �μ���

// std::cout ���� ����� ���� Ÿ���� ����ϱ�

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << p.x << ", " << p.y;
	return os;
}

int main()
{
	Point p(1, 2);

	std::cout << p ; // std::cout.operator<<(Point) �� ������ �˴ϴ�.
					 // �׷���, C++ ǥ���� std::ostream �� ����Լ��� �߰��Ҽ� �����ϴ�.
					
					// �ذ�å : ������ �����Ǵ� ����� �ƴ� �Ϲ� �Լ��� �����մϴ�.
					// operator<<(std::cout, p)
					// operator<<(std::ostream, Point) �� ������ �˴ϴ�.
					
					
					
}


