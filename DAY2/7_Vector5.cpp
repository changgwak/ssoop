#include <iostream>

class Vector
{
private:
	// #1. �����Ҵ�� �޸𸮸� �����Ϸ��� �Ʒ� 2���� ����Ÿ�� �ʿ� �մϴ�.
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
	// �����ڿ��� �����Ҵ��� �޸𸮵��� �ִٸ�
	// �Ҹ��ڸ� ���� �����ϴ� ���� ���� �Դϴ�.
	~Vector()
	{
		delete[] ptr;
	}
};
int main()
{
	// #2. �Ʒ� ������ ����� �޸� ����� ������ ������
	Vector v(4, 0); 

}

// �����Ҷ� �ݵ�� �� �ڵ������� �޸� �׸��� �׸�����!!
// => �޸� �׸��� ���� �߿� �մϴ�.