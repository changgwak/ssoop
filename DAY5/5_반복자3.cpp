#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin(); // �����̳��� 1 ��° ��Ҹ� ����Ű�� �ݺ���
	auto p2 = s.end();   // �����̳��� ������ "����" ��Ҹ� ����Ű�� �ݺ���

	*p1 = 10; // ok
//	*p2 = 10; // runtime error. 
			  // �׻� .end()�� ���� �ݺ��ڴ� * �����ϸ� �ȵ˴ϴ�.

	// p2 ��
	// p1 �� �̵��ؼ� ��ȸ �Ҷ�
	// �������� �����ߴ��� Ȯ���ϴ� �뵵�θ� ���
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}