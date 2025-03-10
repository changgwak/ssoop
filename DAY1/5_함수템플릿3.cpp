#include <iostream>

// #1. decltype : �Ʒ��� ���� ���ø��� ��ȯ Ÿ�� ���鶧 ����ϱ� ���� Ű����
// => �Ʒ� �ڵ�� �� ?? ���� �ϱ�� ?
/*
a = 20; // error. �������� ���
int a = 10;
a = 20; // ok. �����Ŀ����

// �Ʒ� �ڵ�� �ᱹ �� �ڵ�ó��, a, b �� �������� ����ϰ� �ִ� ��
// => �ذ�å�� ��ȯ Ÿ���� �Լ� () �ڿ� ������ �˴ϴ�.
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b)
{
	return a + b;
}
*/

// �Ʒ� ���� ���̺귯���� �����Ϸ��� "���� ��ȯ Ÿ��" ������ �ʿ��߽��ϴ�.
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1, 2.2) << std::endl;


}




