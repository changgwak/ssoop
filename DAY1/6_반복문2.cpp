#include <iostream>
#include <ranges> // C++20 ���� �����ϴ� ���. 

// C++ ���� : C++latest �� �ϼ���
// C++ ǥ�� ����ȸ : �ʹ� �Ϻ��� �߱��ؼ� �ٸ� �� �����ϴ� ����
//				    �����ڿ� �����մϴ�.
//					������ ����� �ּ��� ���踦 ã������

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	for (auto e : x)
//	for (auto e : std::views::reverse(x)) // �����
//	for (auto e : std::views::take(x, 5)) // 5����
	for (auto e : std::views::stride(x, 2)) // 2ĭ��, C++23
	{
		std::cout << e << std::endl;
	}


}
