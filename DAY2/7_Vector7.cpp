#include <iostream>

// Step3. resize() ��� �Լ�

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
};

int main()
{
	int x[4];
	Vector v(4, 0);

	v.at(0) = 10;

	v.resize(8);  // 8 ���� Ű���


	std::cout << v.at(0) << std::endl; // 10
}
