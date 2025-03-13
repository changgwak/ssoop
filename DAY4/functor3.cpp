#include <iostream>


class URandom  // unique random 이라는 의미로!!
{
public:
	int operator()()
	{
		return rand() % 10;
	}
};

URandom urand;  // urand 는 객체지만 () 연산자를 재정의했으므로
				// 함수처럼 사용가능합니다

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}