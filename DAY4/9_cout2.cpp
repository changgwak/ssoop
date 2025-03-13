//#include <iostream>

#include <cstdio>


// 사용자가 std namespace 를 만들어서 추가하면 안되지만, 아래 코드는 수업을 위해서.
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


