#include <iostream>

// noexcept - 182p - C++11
// 1. 함수가 예외가 없음을 알릴때 사용
// 2. 함수가 예외가 없는지/있는지 조사할때 사용

// 모든 함수는 기본적으로 예외 가능성이 있습니다.
void foo()
{
}

// #1. 함수를 만든 사람이 예외가 없다고 보장할수 있으므로
//     noexcept 를 붙이면 됩니다.
// => 장점 : 컴파일러가 보다 더 최적화된 기계어 코드를 만들게 되고
// => 호출자가 예외 여부를 조사해서 보다 효율적인 코드를 작성 할수 있습니다

// => 단, 정확히 알때만 표기하세요, 잘 모르면 표기하지 마세요
void goo() noexcept 
{
}

int main()
{
	// #2. 함수가 예외가 없는지 조사
	bool b1 = noexcept(foo());
	bool b2 = noexcept(goo());

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
}