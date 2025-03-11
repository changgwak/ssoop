#include <iostream>

// Step2. at() 멤버 함수

class Vector
{
private:
	int* ptr;
	int  sz;

public:
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }

	// 핵심 : reference return 을 하면 함수 호출을 등호의 왼쪽에 
	//       놓을수 있습니다.
	//		 "v.at(0) = 10" 이 가능
	int& at(int idx) { return ptr[idx] ; }
};

int main()
{
	Vector v(4, 0);

//	v[0] = 10; // 실제 배열은 이렇게 하지만. 
			   // 우리가 지원하려면 연산자 재정의 필요(5일차)

	v.at(0) = 10;
	v.at(1) = 20;

	std::cout << v.at(0) << std::endl; // 10
	std::cout << v.at(1) << std::endl; // 20
	std::cout << v.at(2) << std::endl; // 0
}


