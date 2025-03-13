//#include <iostream>

#include <cstdio>


// 사용자가 std namespace 를 만들어서 추가하면 안되지만, 아래 코드는 수업을 위해서.
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n)         { printf("%d", n); }
		void operator<<(double d)      { printf("%lf", d); }
		void operator<<(const char* s) { printf("%s", s); }

		// 이외에도 모든 표준타입에 대해서 "operator<<" 제공..
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


