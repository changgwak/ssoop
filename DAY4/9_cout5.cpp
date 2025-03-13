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
	// ���⼭ os �� "std::cout" �����Դϴ�

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
					
					
	// cout �� ������ ���鶧�� non-const �� �ؾ� �մϴ�.
	
	std::ostream& o1 = std::cout; // ok o1 �� << ��밡��
	const std::ostream& o2 = std::cout; // o2 �� << ������

	o1 << "hello"; // ok
	o2 << "hello"; // error.   o2.operator<<() �ε�, 
					// operator<<() �� ��� �Լ� �ƴ�.
}


