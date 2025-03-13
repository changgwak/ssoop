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
	// 여기서 os 는 "std::cout" 별명입니다

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
					
					
	// cout 의 별명을 만들때는 non-const 로 해야 합니다.
	
	std::ostream& o1 = std::cout; // ok o1 은 << 사용가능
	const std::ostream& o2 = std::cout; // o2 는 << 사용못함

	o1 << "hello"; // ok
	o2 << "hello"; // error.   o2.operator<<() 인데, 
					// operator<<() 가 상수 함수 아님.
}


