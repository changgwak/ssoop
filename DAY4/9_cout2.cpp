//#include <iostream>

#include <cstdio>


// ����ڰ� std namespace �� ���� �߰��ϸ� �ȵ�����, �Ʒ� �ڵ�� ������ ���ؼ�.
namespace std
{
	class ostream
	{
	};

	ostream cout;
}


int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n;
	std::cout << d; 

}


