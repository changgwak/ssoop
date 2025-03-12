#include <iostream>
#include <string>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ�
	// => java, C# ���� �θ� ���Ǵ� ���
	std::string to_string()
	{
		std::string s = std::to_string(x) + " ," + std::to_string(y);
		return s;
	}
};

int main()
{
	Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}

