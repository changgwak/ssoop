#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v(4, 0);

	// [] 연산자 : 인덱스가 잘못되었는지 확인안함. 잘못전달하면 비정상종료될수있음
	// at()함수  : 인덱스가 잘못되면 예외 발생
//	v[10] = 10;			// ptr[idx] = value;
//	v.at(10) = 10;		// if ( idx > sz ) throw std::out_of_range 

	try
	{
		v[10] = 10;			
		//v.at(10) = 10;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "예외발생\n";
	}

	for (int i = 0; i < v.size(); i++)
	{
		// 다음중 좋은 코드는 ?
		// => index 가 잘못될 확률이 없습니다.
		// => 1번 사용하세요. 
		v[i] = 0;		// 1
		v.at(i) = 0;	// 2
	}

}