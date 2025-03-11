#include <iostream>

// 객체지향 프로그래밍의 핵심 #2.
// => 타입을 만들때 상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는 함수를
//    묶어서 타입을 만들자

// C  구조체 : 구조체 안에 함수를 넣을수 없다.
// C++구조체 : 구조체 안에 함수를 넣을수 있다.

struct Rect
{
	// 멤버 데이타 ( 다른언어는 "필드" 라는 용어 사용)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수( 다른 언어는 "메소드" 라고 표현)
	// => 특징 : 함수 안에서 멤버 데이타에 직접 접근 할수 있다.
	int getRectArea()
	{
		return (right - left) * (bottom - top);
	}

	void drawRect()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1,1, 10,10 };

	int n1 = rc.getRectArea();

	rc.drawRect();

//	int n1 = getRectArea(rc);
//	drawRect(rc);

}