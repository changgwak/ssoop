// 3_입출력2.cpp - 18 page
#include <iostream>

int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10  즉, 10진수로 출력

	std::cout << std::hex << n << std::endl; // a, 즉, 16진수로 출력
	
	std::cout << std::dec << n << std::endl; // 10, 다시 10진수로
	
	std::cout << std::setw(10) << n << std::endl; // 10 자리에 맞추서 출력
}
