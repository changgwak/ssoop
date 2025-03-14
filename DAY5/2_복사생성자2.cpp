// 2_복사생성자1.cpp
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

void f1(Point  p) {} 
void f2(Point& p) {} 

int main()
{
	Point p1(1, 2);		

	// 복사 생성자가 사용되는 경우 3가지
	// #1. 자신과 동일한 타입의 객체로 초기화 될때
	Point p2(p1); 
	Point p3 = p1;
}




//------------------------

Point pt(1, 1);

Point  f3() { return pt; }						  
Point& f4() { return pt; } 