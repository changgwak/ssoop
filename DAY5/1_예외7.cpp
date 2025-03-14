#include <iostream>

// noexcept - 182p
// 1. 함수가 예외가 없음을 알릴때 사용
// 2. 함수가 예외가 없는지/있는지 조사할때 사용

void foo()
{
}
void goo()
{
}

int main()
{
	bool b1 = noexcept(foo());
	bool b2 = noexcept(goo());

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
}