#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
//	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

// 핵심 : Point 에 디폴트 생성자 없습니다.
//       아래 코드가 왜 에러인지 찾으세요!
class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	// Point 에 디폴트 생성자가 없으므로 아래 코드는 에러
	/*
	Rect()
	{
		// call Point::Point() <== 컴파일러가 추가한 코드 때문에 에러
		std::cout << "Rect()" << std::endl;
	}
	*/
	// 해결책
	// => 멤버 초기화 리스트 위치에 어떤 형태로 생성자를 호출할지 표기
	Rect() : ptFrom(0, 0), ptTo(1, 2) 
	{
		// call Point::Point( 0, 0) <= ptFrom
		// call Point::Point( 1, 2) <= ptTo
		std::cout << "Rect()" << std::endl;
	}


};
int main()
{
	Rect r;
}




