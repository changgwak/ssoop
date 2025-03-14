// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳� ��� ��� �����ϴ� ���
	// 1. range - for ��, ��� �����̳� ����, C++11 ����

	for (auto e : c)
	{
		std::cout << e << std::endl;
	}

	// 2. �ݺ��� ���, ��� �����̳� ��밡��

	auto first = c.begin();
	auto last = c.end();

	while (first != last)
	{
		auto e = *first;
		std::cout << e << std::endl;

		++first;
	}




	// 3. [] ������ ��� - vector, deque�� ����, list �ȵ�
}

