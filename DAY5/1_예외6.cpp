#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v(4, 0);

	// [] 연산자 : 인덱스가 잘못되었는지 확인안함. 잘못전달하면 비정상종료될수있음
	// at()함수  : 인덱스가 잘못되면 예외 발생
	v[10] = 10;
	v.at(10) = 10;
}