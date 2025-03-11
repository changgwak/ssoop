// 8_STL1.cpp
#include <iostream>
#include <string>

int main()
{
	// #1. C 언어의 문자열
	// C언어는 문자타입(char) 만 있고, "문자열 타입" 이 없습니다.
	// => 그래서 문자열을 위해서는 문자타입의배열 또는 문자 타입의 포인터사용
	char cs1[] = "hello";
	char cs2[] = "hello";

	// 단점 : 문자열 관련 코드가 직관적이지 않습니다.
	if (cs1 == cs2) {} // 문자열 비교가 아닌, 배열의 주소 비교, 항상 false
	if (strcmp(cs1, cs2) == 0) {} // 이코드가 문자열 비교!

	// #2. C++ 언어의 문자열 타입
	// => std::string 이라는 타입이 이미 만들어져 있습니다.
	std::string s1 = "hello";
	std::string s2 = "hello";

	// s1, s2 는 int 형 변수와 사용법 동일 합니다.
	auto s3 = s1 + s2;

	if (s1 == s2) {}

	if (s1 > s2) {}

	auto n = s1.size(); // 5
}