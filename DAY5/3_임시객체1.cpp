#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
//	Point pt(1, 2); // pt �� �̸� �ִ� ��ü(named object)
					// �̸��� �����Ƿ� ���� ���忡�� ���� ����
					// ���� : �ڽ��� ������ {}�� ����� �ı�


//	Point (1, 2);	// �̸� ���� ��ü(unnamed object)
					// <= �Լ�ȣ�� �ƴմϴ�. Point �� �Լ��� �ƴմϴ�.
					// �̸��� �����Ƿ� �ٸ� ���忡�� ��� ����.
					// ���� : �ڽ��� ������ ������ ��(;)���� �ı�
					
					// "�ӽð�ü(temporary)" ��� �θ��ϴ�.
					// "RUST ���" ������ ���� �߿��ϰ� �ٷ�� ����.


	Point(1, 2), std::cout << "X\n";

	std::cout << "-------" << std::endl;
}





