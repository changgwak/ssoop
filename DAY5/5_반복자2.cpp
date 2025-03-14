// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 1. 반복자의 정확한 타입
	// => 그런데 C++11 이후라면 아래 처럼 하지 마세요
	// => 아래 처럼하면 container 교체시 코드 수정해야 합니다.
//	std::list<int>::iterator p1 = s.begin(); 

	// 2. auto 사용하세요
	
	auto p1 = s.begin();

}

/*
namespace std
{
	// 이안에 list 의 반복자 클래스도 있습니다.
	class list_iterator
	{
	};

	template<typename T>
	class list
	{
	public:
		using iterator = list_iterator;
	};
}
*/