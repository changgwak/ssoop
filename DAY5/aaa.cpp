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


Point f5()
{
	Point p(1, 2);
	return p;
}

int main()
{
	f5();
}
// �����Ϸ� ����ȭ ������ ������ "���� ������" ȣ����
// Ȯ���Ϸ��� 
// g++ �� �Ʒ� ó�� "����ȭ ���� ����" �� �ɼ� ����
// 
// g++ aaa.cpp -fno-elide-constructors

