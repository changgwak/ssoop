#include <iostream>

// #1. C++11 ���� ��ȯ Ÿ���� ������ ǥ���Ѱ�
template<typename T1, typename T2>
auto Add1(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

// #2. C++14 ���ʹ� auto �� ǥ���ص� �˴ϴ�. ��ȯŸ�� ��ü�� ����
// => �����Ϸ����� return ������ ���� �߷��� �޶�� ��
// => return ������ 2�� �̻��̰�, ���� �ٸ� Ÿ������ ��ȯ�ϸ� �߷� ����.������ ����
template<typename T1, typename T2>
auto Add2(T1 a, T2 b)
{
	if (b == 0) return a;
	return a + b;
}

int main()
{
	std::cout << Add1(1, 2.2) << std::endl;
	std::cout << Add2(1, 2.2) << std::endl;


}




