#include <iostream>

// Step 5. int �� �ƴ϶� �ٸ� Ÿ�Ե� ���������ϰ�
// => Ŭ������ �ƴ� Ŭ������ ����� Ʋ(template) �� ����
// => �Լ� �� �ƴ϶� Ŭ����(����ü)�� ���ø����� ����� �ֽ��ϴ�.

template<typename T>
class Vector
{
private:
	T* ptr;
	int  sz;

public:
	Vector(int size, T value)
	{
		sz = size;
		ptr = new T[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }


	void resize(int new_size)
	{
		if (new_size > sz)
		{
			T* tmp = new T[new_size];

			memcpy(tmp, ptr, sizeof(T) * sz);

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
	// �Լ� ���ø��� Ÿ�� ���� �����ص� ������(�Լ����ڷ� �߷�)
	// Ŭ���� ���ø��� �ݵ�� Ÿ������ �����ؾ� �մϴ�.
	Vector<int> v(4, 0);

	Vector<double> v1(3, 1.2);

	v.at(0) = 10;
	v.resize(8);
	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl; // 8
}
