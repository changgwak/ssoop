#include <iostream>

// std::cout : C++ 초기 부터 사용된 출력을 위한 객체지만
//			   비판이 아주 많았습니다
// #1. 코드가 너무 장황스러워진다(길어진다.)
// #2. 느리다.(printf 가 훨씬 빠름)

// 그래서 C++23 에서 새로운 출력 방법이 등장 합니다.
#include <print> // C++23 에서 추가된 헤더

int main()
{
	int n = 1;
	double d = 3.4;
	std::println("{}, {}", n, d);
	std::println("{0}, {1:10}, {0}", n, d);

	// C#은 아래 처럼도 되는데, C++은 안됨
//	WriteLine($"{n}, {d}");
}
// visual studio 2022 : 지원
// g++				  : g++14 부터 지원

// g++ 2_입출력3.cpp -std=c++23 -lstdc++exp 

// 입력은 "std::cin" 그대로 , 출력만 C++23에서 추가!