#include <iostream>

class Point
{
public:
	int x, y;

	// member intializer list 는 대입이 아닌 초기화 입니다.
	// 초기화는 멤버 데이타가 놓인 순서대로 수행됩니다.
	// 즉, : 뒤에 코드 순서가 아닙니다.
	//		  (2)   (1)   <= 이순서로 실행
	Point() : y(0), x(y)
	{
	}

	// 권장
	// => member intializer list 작성시
	// => 멤버 데이타가 선언된 순서대로 작성하세요. 
};


int main()
{
	Point pt;

	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // 0
}




