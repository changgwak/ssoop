#include <iostream>

// Step 5. int 뿐 아니라 다른 타입도 보관가능하게
// => 클래스가 아닌 클래스를 만드는 틀(template) 을 설계
// => 함수 뿐 아니라 클래스(구조체)도 템플릿으로 만들수 있습니다.

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
	// 함수 템플릿은 타입 인자 생략해도 되지만(함수인자로 추론)
	// 클래스 템플릿은 반드시 타입인자 전달해야 합니다.
	Vector<int> v(4, 0);

	Vector<double> v1(3, 1.2);

	v.at(0) = 10;
	v.resize(8);
	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl; // 8
}
