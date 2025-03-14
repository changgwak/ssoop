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
	// 반환 값   : 찾은곳을 가리키는 반복자
	//            실패시 last 반환
	auto ret1 = std::find(s.begin(), s.end(), 3);


}

