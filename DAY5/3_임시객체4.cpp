#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 2);

Point foo() 
{
	return pt; 
			// 리턴용 복사본 생성됩니다.
			// 리턴용 복사본이 임시객체이고
			// 함수 호출문장의 끝에서 파괴 됩니다.
}

int main()
{
	foo();
}







