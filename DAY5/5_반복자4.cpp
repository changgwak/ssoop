// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법
	// 1. range - for 문, 모든 컨테이너 가능, C++11 부터

	for (auto e : c)
	{
		std::cout << e << std::endl;
	}

	// 2. 반복자 사용, 모든 컨테이너 사용가능

	auto first = c.begin();
	auto last = c.end();

	while (first != last)
	{
		auto e = *first;
		std::cout << e << std::endl;

		++first;
	}




	// 3. [] 연산자 사용 - vector, deque만 가능, list 안됨
}

