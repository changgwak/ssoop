// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::find
	// �˻� ���� : [first, last )
	//			   last �� �˻� ��� �ƴ�. �� ���౸��(half-open range)	
	// ��ȯ ��   : ã������ ����Ű�� �ݺ���
	//            ���н� last ��ȯ
	auto ret1 = std::find(s.begin(), s.end(), 3);

	if (ret1 == s.end())
	{
		std::cout << "�˻� ����\n";
	}
	else
	{
		// �˻� ����. ret1 �� 3�� ����Ű�� �ݺ���(�����Ͷ�� �����ϼ���)
		std::cout << *ret1 << std::endl; // 3
	}


}

