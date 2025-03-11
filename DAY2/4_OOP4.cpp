#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};

int main()
{
	// #1. ��� 
	int n = 10; // "��" �ϴ� "��" ��� �ؼ� "����" ��� ��� ���
	n = 20;

	Rect r = { 1,1,10,10 }; // "����" �� �ƴ� "��ü" ��� �մϴ�.

	// ��ü(object) : ���� �����ϴ� ��� �͵�..

	// int n �� n �� �޸𸮿� "����" �ϹǷ� "��ü" �Դϴ�.
	// ����� n �� ������ �ƴ� "��ü" ��� ��� ���
	// C++ ����
	// primitive type �� �޸𸮿� �����Ѱ� : ����
	// user define type�� �޸𸮿� �����Ѱ� : ��ü ��� �θ��ϴ�.



	// #2. �޸� layout
	// => ���ÿ��� ��� ����Ÿ�� ��ü�� �Ѱ��� �����˴ϴ�.
	// => ��� �Լ��� �ڵ�޸𸮿� �Ѱ����� ���� 
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16
}
