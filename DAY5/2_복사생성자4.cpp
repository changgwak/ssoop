#include <iostream>


class Vector
{
private:
	int* ptr;
	int  sz;
public:
	Vector(int size, int value) : sz(size)
	{
		ptr = new int[sz];
		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }


	// ����ڰ� ���� ����� ���� ������
	// => ���� ����(deep copy) �� ����
	Vector(const Vector& v) : sz(v.sz)
	{
		// #1. �����Ͱ� �ƴ� ����� �׳� ����
		// sz = v.sz;	 <= �� ��ġ ���ٴ� �ʱ�ȭ����Ʈ�� ����


		// #2. �����ʹ� �޸� �Ҵ���, �޸� ��ü�� ����
		ptr = new int[sz];

		memcpy(ptr, v.ptr, sizeof(int) * sz);
	}
};

int main()
{
	Vector v1(4, 0);

	Vector v2 = v1; 

}
