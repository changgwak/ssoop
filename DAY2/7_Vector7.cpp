#include <iostream>

// Step3. resize() 멤버 함수

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
		if (new_size > sz)	// 커지는 경우
		{
			int* tmp = new int[new_size];

			memcpy(tmp, ptr, sizeof(int) * sz);

			delete[] ptr;	// ptr을 제거하는게 아니라
							// ptr 이 가리키는 메모리 제거

			ptr = tmp;

			sz = new_size;

		}
		else
		{
			// 작아지는 경우
		}
	}
};



int main()
{
	Vector v(4, 0);

	v.at(0) = 10;

	v.resize(8);  // 8 개로 키우기


	std::cout << v.at(0) << std::endl; // 10
}
