#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 2);

Point foo() 
{
	return pt; 
			// ���Ͽ� ���纻 �����˴ϴ�.
			// ���Ͽ� ���纻�� �ӽð�ü�̰�
			// �Լ� ȣ�⹮���� ������ �ı� �˴ϴ�.
}

int main()
{
	foo();
}







