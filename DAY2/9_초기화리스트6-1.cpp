#include <iostream>

int g = 10;

class Point
{
	int x = 0;
	int y = ++g; //핵심. 절대 이렇게는 하지 마세요
					// = 0 같이 literal 초기화만 사용하세요.
public:
	Point() {}					// : x(0), y(++g) {}
	Point(int a) : y( a ) {}	// : x(0), y(a) {}
};
int main()
{
	Point p1;
	Point p2(3);

	std::cout << g << std::endl; // ?? 결과 예측하세요 => 11
									// 10 ? 11 ? 12
}

// Zig 언어 :  보이는 대로 실행 된다.
//			=> 컴파일러가 추가하거나 변경하지 않는다.
//			=> 요즘 임베디드 분야에서 뜨고 있는 언어.



