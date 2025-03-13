#include <cstdio>

// std::endl ����
// => ����� ����. ���� �˴ϴ�.

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n);  return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s);  return *this; }
	
		ostream& operator<<(ostream&(*f)(ostream&) )
		{ 
			? ;
			return *this; 
		}

	};
	ostream cout;

	// endl �� �Ʒ� ó�� ������� �Լ� �Դϴ�.
	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}
int main()
{
//	std::cout << std::endl; // ����   "const char endl = '\n'" �� ����ƴմϴ�.

	std::endl( std::cout ); // ok.. endl �� �Լ� �Դϴ�.
							// �� �ڵ尡 ���� �����մϴ�.


	std::cout << std::endl; // cout.operator<<( ? )
}


