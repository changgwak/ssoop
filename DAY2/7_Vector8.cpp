#include <iostream>

// Step4. 사용자들이 편리하게 사용할수 있도록 유용한 멤버 함수 제공


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

	int size() { return sz; }
	bool empty() { return sz == 0; }
};

int main()
{
	Vector v(4, 0);

	v.at(0) = 10;
	v.resize(8);  
	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl; // 8
}
