#include <iostream>
// 171 page
// 이 주제는 중요합니다. 알아 두세요

// std::cout 으로 사용자 정의 타입을 출력하기

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

	std::cout << p ; // std::cout.operator<<(Point) 가 있으면 됩니다.
					 // 그런데, C++ 표준인 std::ostream 에 멤버함수를 추가할수 없습니다.
					
					// 해결책 : 연산자 재정의는 멤버가 아닌 일반 함수도 가능합니다.
					// operator<<(std::cout, p)
					// operator<<(std::ostream, Point) 가 있으면 됩니다.
					
					
					
}


