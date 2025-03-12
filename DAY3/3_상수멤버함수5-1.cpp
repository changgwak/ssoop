#include <iostream>
#include <string>


// ���� �����(logical constness)
// => �ܺ� ����� ���忡���� "��� ��� �Լ�" �� �Ǵ� ���� ������
// => Ŭ���� ��� �Լ� ������ ��� ��� �Լ� �ȿ��� ��� ����Ÿ ������ �ʿ��� ���

// �ذ�å : mutable Ű����

class Point
{
	int x, y;

	// ��� ��� �Լ� �ȿ����� ���� �����ϵ��� �ϴ� ��� ����Ÿ ���鶧 ���
	mutable std::string cache;
	mutable bool cache_valid = false;
public:
	Point(int a, int b) : x(a), y(b) {}

	std::string to_string() const
	{
		if (cache_valid == false)
		{
			cache = std::to_string(x) + ", " + std::to_string(y);
			cache_valid = true;
				// ����, x, y �� ����Ǵ� �Լ����� cache_valid = false �κ���
		}
		return cache;
	}
};

int main()
{
	const Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}

