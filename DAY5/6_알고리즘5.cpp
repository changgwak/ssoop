// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = { 6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0 };

	std::transform(v1.begin(), v1.end(),  // 1. 이 구간을
					v2.begin(),           // 2. 이 구간과 함께
					v3.begin(),           // 4. 이곳에 넣어라
					함수);				  // 3. 이함수에 보내서 반환값을를	


	for (auto e : v3)
		std::cout << e << ", ";
		// 7,9,11,13,15 나에게 위 코드 완성하세요
}
