#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	// 언제 호출되는지 확인을 위해서 복사 생성자에서 로그...
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
// 컴파일러 최적화 때문에 생략된 "복사 생성자" 호출을
// 확인하려면 
// g++ 로 아래 처럼 "최적화 하지 말라" 는 옵션 전달
// 
// g++ aaa.cpp -fno-elide-constructors

