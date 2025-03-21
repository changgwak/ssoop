// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 184 page ~ 
// 아래 함수가 1만번 호출된다.
// => 이런 함수 내부에서는 vector 사용하지 마세요
void f1()
{
//	int x[100];
	std::vector<int> v(100);
}

int main()
{
	// 배열   : 크기를 변경할수 없다. 데이타를 스택에 보관. 연속된 메모리.  
	// vector : 크기를 변경할수 있다. 데이타를 힙에 보관.  연속된 메모리, 배열과 사용법 거의 동일

	// 배열 vs vector
	// => 생성후 요소 접근속도는 유사
	// => 생성 속도는 배열이 빠름. 

	int x[5] = { 1,2,3,4,5 };


	std::vector<int> v = { 1,2,3,4,5 };





	// 배열과 vector 는 사용법이 거의 동일 합니다.
	std::cout << x[0] << std::endl; // [] 연산자 사용가능
	std::cout << v[0] << std::endl; // [] 연산자 사용가능

	// 하지만 vector 가 배열 보다 편리합니다.
	v.resize(10);

	std::cout << v.size() << std::endl; // 10
}

