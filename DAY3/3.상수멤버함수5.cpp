#include <iostream>
#include <string>

// 1. 멤버 함수를 만들때 "const member function" 으로 할지 말지 를 잘 판단하세요
//    "상수 객체에 대해서도 호출 가능해야 하는가 ?"


class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// 객체의 상태를 문자열로 반환하는 함수
	// => java, C# 에서 널리 사용되는 기술
	// => 아래 to_string() 은 const member function 이 되는것이 맞습니다.
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

