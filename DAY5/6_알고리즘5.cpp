// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = { 6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0 };

	std::transform(v1.begin(), v1.end(),  // 1. �� ������
					v2.begin(),           // 2. �� ������ �Բ�
					v3.begin(),           // 4. �̰��� �־��
					�Լ�);				  // 3. ���Լ��� ������ ��ȯ������	


	for (auto e : v3)
		std::cout << e << ", ";
		// 7,9,11,13,15 ������ �� �ڵ� �ϼ��ϼ���
}
