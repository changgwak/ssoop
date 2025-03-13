// github.com/codenuri/day2/vector7.cpp
// 2���� �ҽ����� vector7.cpp ����
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

	// [] ������ ������
	// => ��ü�� �迭 ó�� ��밡���ϰ� �ϱ� ���� ���
	// => ��� �Լ��θ� ���� ����(non-member �� �ȵ�)
	// => ��ȣ�� ���ʿ� �ü� �ְ� �ϱ� ���� reference �� ��ȯ
	//    "v[0] = 10"
	int& operator[](int idx) { return ptr[idx]; }

};

int main()
{
	Vector v(4, 0);

//	v.at(0) = 10;
//	std::cout << v.at(0) << std::endl; // 10

	v[0] = 10; // v.operator[](0) = 10; �� �ؼ��˴ϴ�.
	std::cout << v[0] << std::endl;

	v.operator[](1) = 10; // �̷��� ����ص� �˴ϴ�.
						  // �Ϲ������� �̷���  ��������� ������...
	
}
