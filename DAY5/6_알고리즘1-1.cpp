// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::find
	// 검색 구간 : [first, last )
	//			   last 는 검색 대상 아님. 반 개행구간(half-open range)	
	// 반환 값   : 찾은곳을 가리키는 반복자
	//            실패시 last 반환
	auto ret1 = std::find(s.begin(), s.end(), 3);

	if (ret1 == s.end())
	{
		std::cout << "검색 실패\n";
	}
	else
	{
		// 검색 성공. ret1 은 3을 가리키는 반복자(포인터라고 생각하세요)
		std::cout << *ret1 << std::endl; // 3
	}


}

