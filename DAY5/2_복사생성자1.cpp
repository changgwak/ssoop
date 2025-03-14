// 2_복사생성자1.cpp
#include <iostream>

// 124 page ~ 

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2
};

int main()
{
	// 아래 4줄에 대해서 생각해 봅시다.
	Point p1;		// ok. 1번 생성자 호출
//	Point p2(1);    // error. 인자가 한개인 생성자는 없다
	Point p3(1,2);	// ok. 2번 생성자 호출
	Point p4(p3);   
}