#include <iostream>

// 객체지향 프로그래밍의 핵심 #1. 필요한 타입을 먼저 설계 하자.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// 이제 코드에서 사각형이 필요하면 "int*4" 로하지 말고 "Rect" 사용

int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1,1, 10,10 };

	int n1 = getRectArea(rc);
	drawRect(rc);

//	int n1 = getRectArea(1, 1, 10, 10);
//	drawRect(1, 1, 10, 10);
}