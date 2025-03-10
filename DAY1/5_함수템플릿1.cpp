﻿#include <iostream>

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
	// #3. 아래 2줄은 아무 문제 없습니다.
	std::cout << Add(1,   2 )  << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;

	// #4. 아래 코드를 생각해 보세요
	std::cout << Add(1, 2.2) << std::endl; // error. 인자 2개 모두 T인데
									// 인자가 int, double 로 전달하므로
									// T 결정못함

	// #5. 아래 처럼 사용하면 에러 아님
	std::cout << Add<double>(1, 2.2) << std::endl;
}




