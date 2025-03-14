#include <iostream>

void draw_pixel(int x, int y) {}

int main()
{
	// 1, 2 에 점을 그리고 싶다. 다음중 좋은 코드는 ?
	// => 변수를 만들 필요 없습니다. 1번이 좋은 코드
	// 
	// #1. 인자를 literal 로 전달
	draw_pixel(1, 2);


	// #2. 변수를 만들어서 전달
	int x = 1, y = 2;
	draw_pixel(x, y);

	//.....
}





