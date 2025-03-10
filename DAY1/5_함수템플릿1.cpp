#include <iostream>

// #1. 아래 처럼 하면 int 타입 2개만 덧셈 가능
/*
int Add(int a, int b)
{
	return a + b;
}
*/

// #2. 함수가 아닌 함수를 만드는 틀(템플릿) 제작
template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1,   2 )  << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;
}




