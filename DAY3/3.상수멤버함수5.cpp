#include <iostream>
#include <string>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// 객체의 상태를 문자열로 반환하는 함수
	// => java, C# 에서 널리 사용되는 기술
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

