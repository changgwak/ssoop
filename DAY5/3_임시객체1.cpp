#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
//	Point pt(1, 2); // pt 는 이름 있는 객체(named object)
					// 이름이 있으므로 여러 문장에서 접근 가능
					// 수명 : 자신을 선언한 {}을 벗어날때 파괴


//	Point (1, 2);	// 이름 없는 객체(unnamed object)
					// <= 함수호출 아닙니다. Point 는 함수가 아닙니다.
					// 이름이 없으므로 다른 문장에서 사용 못함.
					// 수명 : 자신을 선언한 문장의 끝(;)에서 파괴
					
					// "임시객체(temporary)" 라고도 부릅니다.
					// "RUST 언어" 에서도 아주 중요하게 다루는 주제.


	Point(1, 2), std::cout << "X\n";

	std::cout << "-------" << std::endl;
}





