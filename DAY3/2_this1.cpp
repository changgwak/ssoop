// 5_this1.cpp      97 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// 사용자 코드				// 컴파일러가 변경한 코드
	void set(int a, int b)		// void set(Point* this, int a, int b)
	{							// {
		x = a;					//		this->x = a;
		y = b;					//		this->y = b;

		// 멤버 함수안에서 this : 현재 멤버함수를 호출한 객체의 주소
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20); // 컴파일러가 "set(&p1, 10, 20)" 라는 형태로 변경합니다.
	p2.set(10, 20); // set(&p2, 10, 20)
}
