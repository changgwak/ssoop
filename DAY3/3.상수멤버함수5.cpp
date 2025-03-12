#include <iostream>
#include <string>

// 1. ��� �Լ��� ���鶧 "const member function" ���� ���� ���� �� �� �Ǵ��ϼ���
//    "��� ��ü�� ���ؼ��� ȣ�� �����ؾ� �ϴ°� ?"


class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ�
	// => java, C# ���� �θ� ���Ǵ� ���
	// => �Ʒ� to_string() �� const member function �� �Ǵ°��� �½��ϴ�.
	std::string to_string() const 
	{
		std::string s = std::to_string(x) + ", " + std::to_string(y);
		return s;
	}
};

int main()
{
	const Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}

