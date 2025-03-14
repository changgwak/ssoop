
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
}





