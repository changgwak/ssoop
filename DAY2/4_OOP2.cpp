#include <iostream>

// ��ü���� ���α׷����� �ٽ� #1. �ʿ��� Ÿ���� ���� ���� ����.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// ���� �ڵ忡�� �簢���� �ʿ��ϸ� "int*4" ������ ���� "Rect" ���

int getRectArea(Rect rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(Rect rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1,1, 10,10 };
	int n1 = getRectArea(rc);
	drawRect(rc);

//	int n1 = getRectArea(1, 1, 10, 10);
//	drawRect(1, 1, 10, 10);
}