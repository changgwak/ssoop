// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 185 ~

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // 어떻게 구현 했을까요 ?

	std::cout << v.size() << ", " << v.capacity() << std::endl;	
	
	v.push_back(0); // 끝에 한개 추가
					// 현재 size < capacity 상태이므로
					// 이 함수는 아주 빠르게 동작합니다.
					// "not expensive"

	std::cout << v.size() << ", " << v.capacity() << std::endl;
												// 4, 5

	v.shrink_to_fit();	// 여분의 메모리는 제거해 달라.
						// 실제 구현은 "4개 메모리" 할당해서 사용.
						// 기존 "5개 메모리"는 제거

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 4


	v.push_back(0);	// size == capacity 이므로 메모리 재할당 필요
					// 이 경우는 "expensive" 한 함수!

	std::cout << v.size() << ", " << v.capacity() << std::endl; 
					// size : 5
					// capacity : g++ 은 2배, vs 는 1.5


	v.clear();	// 실제 메모리를 제거할까요 ? size 만 0으로 할까요 ?

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.shrink_to_fit(); // 이순간 필요없는 메모리 제거
						// 현재 size == 0 이므로
						// 버퍼를 완전히 제거

	std::cout << v.size() << ", " << v.capacity() << std::endl;
}
// 위 예제를 통해서 capacity 라는 개념 알아 두세요
// => 파이썬의 list 도 동일합니다.
// => 대부분의 언어에 있는 개념