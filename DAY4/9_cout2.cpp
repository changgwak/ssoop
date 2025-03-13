//#include <iostream>

#include <cstdio>


// ����ڰ� std namespace �� ���� �߰��ϸ� �ȵ�����, �Ʒ� �ڵ�� ������ ���ؼ�.
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n)         { printf("%d", n); }
		void operator<<(double d)      { printf("%lf", d); }
		void operator<<(const char* s) { printf("%s", s); }

		// �̿ܿ��� ��� ǥ��Ÿ�Կ� ���ؼ� "operator<<" ����..
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


