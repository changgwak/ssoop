#include <cstdio>

// std::endl 원리
// => 어려운 내용. 몰라도 됩니다.

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n);  return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s);  return *this; }

		ostream& operator<<(ostream& (*f)(ostream&))
		{
			f(*this); 
			return *this;
		}
	};
	ostream cout;

	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}
//---------------
std::ostream& tab(std::ostream& os)
{
	os << "\t";
	return os;
}
std::ostream& menu(std::ostream& os)
{
	os << "1. 김밥\n";
	os << "2. 라면\n";
	return os;
}
int main()
{
	std::cout << std::endl; // cout.operator<<( std::endl ) 는 결국
							// std::endl( std::cout) 입니다.
							// 즉, 함수 주소 보내서 다시 호출되게 한것!!
	std::cout << tab; //
	std::cout << "A" << tab << "B" << std::endl;

	std::cout << menu;
}


