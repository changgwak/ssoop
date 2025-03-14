// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


// ���� �Լ� : ���ڰ� 1���� �Լ�
// ���� �Լ� : ���ڰ� 2���� �Լ�

// ������(Predicate) : bool �� ��ȯ �ϴ� �Լ�

// find_if �� 3��° ���ڴ� "���� ������(unary predicate)" �Դϴ�.

bool foo(int n) { return n % 3 == 0; }



int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// �־��� �������� ó�� ������ "3" �� ã�ƶ�
	auto ret1 = std::find(v.begin(), v.end(), 3); 

	// std::find    : ��   �˻�, 3��° ���ڷ� ��
	// std::find_if : ���� �˻�, 3��° ���ڷ� �Լ�


	// �־��� �������� ó�� ������ "3�� ���" �� ã�ƶ�
	
	auto ret2 = std::find_if(v.begin(), v.end(), foo );

	if (ret2 != v.end())
	{
	}
	else
	{
		std::cout << *ret2 << std::endl;
	}

}