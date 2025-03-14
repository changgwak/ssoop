
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void draw_line(const Point& from, const Point& to) {}

int main()
{
	// draw_line 함수로 (1, 1) ~ (5, 5) 에 선을 그려보세요

	Point p1(1, 1);
	Point p2(5, 5);

	draw_line(p1, p2); 

	// p1, p2 가 더이상 필요 없습니다. 즉시 파괴 되었을까요 ??

	// 핵심 : 함수 인자로만 사용할 객체가 필요하면
	//		  임시객체(temporary)로 전달하는 것이 효율적입니다.
	draw_line( Point(1, 1), Point(5, 5) );
}





