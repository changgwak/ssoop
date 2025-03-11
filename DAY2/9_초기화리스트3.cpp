#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b)  { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect()
	{
		// 컴파일러가 아래 주석처럼 멤버데이타의 생성자를 호출하는 코드를 추가한것
		// => 핵심: 컴파일러가 추가한 코드는 항상 디폴트 생성자 호출
		// call Point::Point()  <= ptFrom 에 대해서
		// call Point::Point()  <= ptTo 에 대해서

		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r; // call Rect::Rect() 호출
}




