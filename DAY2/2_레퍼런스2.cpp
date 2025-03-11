// 1_레퍼런스2
#include <iostream>
// 61 page - 교재 그림 정확히 이해하면 됩니다.

// 핵심 : call by reference(함수인자로 reference 사용) 은
// => call by pointer 와 동일하게 원본 수정이 가능합니다
// => 그런데 장점은 ?
// #1. 포인터 보다 가독성이 좋습니다.
// #2. 포인터 보다 안전합니다.

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1( a ); // call by value, a증가안함
	inc2( &b );// call by pointer, b증가
	inc3( c ); // call by reference, c증가

	std::cout << a << std::endl; // 1
	std::cout << b << std::endl; // 2
	std::cout << c << std::endl; // 2
}
