#include <iostream>

// noexcept - 182p
// 1. �Լ��� ���ܰ� ������ �˸��� ���
// 2. �Լ��� ���ܰ� ������/�ִ��� �����Ҷ� ���

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