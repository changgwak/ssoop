// github.com/codenuri/day2/vector7.cpp
// 2일차 소스에서 vector7.cpp 복사
#include <iostream>


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




	void resize(int new_size)
	{
		if (new_size > sz)	
		{
			int* tmp = new int[new_size];

			memcpy(tmp, ptr, sizeof(int) * sz);

			delete[] ptr;	

			ptr = tmp;

			sz = new_size;

		}
		else
		{
			
		}
	}

	int& at(int idx) { return ptr[idx]; }

	// [] 연산자 재정의
	// => 객체를 배열 처럼 사용가능하게 하기 위해 사용
	// => 멤버 함수로만 구현 가능(non-member 는 안됨)
	// => 등호의 왼쪽에 올수 있게 하기 위해 reference 로 반환
	//    "v[0] = 10"
	int& operator[](int idx) { return ptr[idx]; }

};

int main()
{
	Vector v(4, 0);

//	v.at(0) = 10;
//	std::cout << v.at(0) << std::endl; // 10

	v[0] = 10; // v.operator[](0) = 10; 로 해석됩니다.
	std::cout << v[0] << std::endl;

	v.operator[](1) = 10; // 이렇게 사용해도 됩니다.
						  // 일반적으로 이렇게  사용하지는 않지만...
	
}
