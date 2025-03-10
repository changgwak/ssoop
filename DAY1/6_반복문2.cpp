#include <iostream>
#include <ranges> // C++20 부터 지원하는 헤더. 

// C++ 버전 : C++latest 로 하세요
// C++ 표준 위원회 : 너무 완벽을 추구해서 다른 언어가 지원하는 것이
//				    한참뒤에 등장합니다.
//					성능을 고려한 최선의 설계를 찾기위해

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	for (auto e : x)
//	for (auto e : std::views::reverse(x)) // 뒤집어서
//	for (auto e : std::views::take(x, 5)) // 5개만
	for (auto e : std::views::stride(x, 2)) // 2칸씩, C++23
	{
		std::cout << e << std::endl;
	}


}
