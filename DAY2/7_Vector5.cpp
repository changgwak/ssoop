#include <iostream>

class Vector
{
private:
	// #1. �����Ҵ�� �޸𸮸� �����Ϸ��� �Ʒ� 2���� ����Ÿ�� �ʿ� �մϴ�.
	int* ptr;
	int  sz;

public:
	// #2. ������ �������� �޸� ����� ������ ������
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = sz;
	}

};

int main()
{
	Vector v(4, 0); 

}