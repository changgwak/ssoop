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

	int& at(int idx) { return ptr[idx]; }


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
};



int main()
{
	Vector v(4, 0);

	v.at(0) = 10;

	std::cout << v.at(0) << std::endl; // 10
}
