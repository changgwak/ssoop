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
	
		ostream& operator<<(ostream&(*f)(ostream&) )
		{ 
			? ;
			return *this; 
		}

	};
	ostream cout;

	// endl 은 아래 처럼 만들어진 함수 입니다.
	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}
int main()
{
//	std::cout << std::endl; // 개행   "const char endl = '\n'" 는 절대아닙니다.

	std::endl( std::cout ); // ok.. endl 은 함수 입니다.
							// 이 코드가 위와 동일합니다.


	std::cout << std::endl; // cout.operator<<( ? )
}


