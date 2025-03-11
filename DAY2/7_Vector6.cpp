#include <iostream>

// Step2. at() ��� �Լ�

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

	// �ٽ� : reference return �� �ϸ� �Լ� ȣ���� ��ȣ�� ���ʿ� 
	//       ������ �ֽ��ϴ�.
	//		 "v.at(0) = 10" �� ����
	int& at(int idx) { return ptr[idx] ; }
};

int main()
{
	Vector v(4, 0);

//	v[0] = 10; // ���� �迭�� �̷��� ������. 
			   // �츮�� �����Ϸ��� ������ ������ �ʿ�(5����)

	v.at(0) = 10;
	v.at(1) = 20;

	std::cout << v.at(0) << std::endl; // 10
	std::cout << v.at(1) << std::endl; // 20
	std::cout << v.at(2) << std::endl; // 0
}


