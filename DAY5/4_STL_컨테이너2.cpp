// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 185 ~

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // 어떻게 구현 했을까요 ?

	std::cout << v.size() << ", " << v.capacity() << std::endl;			// 3
	

}