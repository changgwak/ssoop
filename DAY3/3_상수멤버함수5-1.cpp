#include <iostream>
#include <string>


class Point
{
	int x, y;

	std::string cache;
	bool cache_valid = false;
public:
	Point(int a, int b) : x(a), y(b) {}

	std::string to_string() const
	{
		if (cache_valid == false)
		{
			cache = std::to_string(x) + ", " + std::to_string(y);
			cache_valid = true;
				// 이제, x, y 가 변경되는 함수에서 cache_valid = false 로변경
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

