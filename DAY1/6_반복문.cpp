// 8_반복문 44 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	// C++11 의 새로운 for 문 - ranged-for 라는 이름을 가진 문법
	// Python : for e in x
	// C#     : foreach var e in x
	for (auto e : x)
	{
		std::cout << e << std::endl;
	}
}
