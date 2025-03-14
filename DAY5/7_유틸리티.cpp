// 7_유틸리티
#include <iostream>
#include <tuple>
#include <vector>

// 다른 언어가 제공하는 도구는 대부분 C++에도 있습니다.
// => 요즘 언어들은 아주 많이 비슷하다는 특징이 있습니다.

// s = [1,2,3]    파이썬 리스트 : 동일 타입의 객체를 여러개 보관
// t = (1, 3.4)   파이썬 튜플 : 다른 타입의 객체를 여러개 보관

int main()
{
	std::vector<int> v = { 1,2,3,4,5 }; // 파이썬 리스트

	std::tuple<int, double, char> t(1, 3.4, 'A'); // 튜플

	// 접근이 어렵습니다.
	std::cout << std::get<1>(t); // 3.4
}

