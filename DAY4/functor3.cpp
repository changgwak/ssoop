#include <iostream>


class URandom  // unique random �̶�� �ǹ̷�!!
{
public:
	int operator()()
	{
		return rand() % 10;
	}
};

URandom urand;  // urand �� ��ü���� () �����ڸ� �����������Ƿ�
				// �Լ�ó�� ��밡���մϴ�

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}