#include <iostream>

int g = 10;

class Point
{
	int x = 0;
	int y = ++g; 핵심
public:
	Point() {}
	Point(int a) : y( a ) {}
};
int main()
{
	Point p1;
	Point p2(3);

	std::cout << g << std::endl; // ?? 결과 예측하세요
}




