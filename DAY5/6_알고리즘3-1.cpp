// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };


	auto ret1 = std::find_if(v.begin(), v.end(), foo);

	// 람다 표현식(lambda expression)
	// => C++11
	// => 익명의 함수를 만드는 문법
	// => 함수 이름을 전달하는 위치에 "함수 구현 자체"를 전달하는 기술

	// [] : 람다표현식이 시작됨을 알리는 기호
	//		lambda introducer

	auto ret2 = std::find_if(v.begin(), v.end(),  
					[](int n) { return n % 3 == 0; } );


}