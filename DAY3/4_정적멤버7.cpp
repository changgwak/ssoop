#include <iostream>

// C++17 inline static ���� - 122 page

class Car
{
	int color = 0;

	// C++17 �� inline static �� ����ϸ� 
	// static ��� ������ �ܺ����� �ʿ� �����ϴ�.
	// �ʱ�ȭ�� ���⼭ ����
	inline static int cnt = 0;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};



int main()
{

}

