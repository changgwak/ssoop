#include <iostream>

// ��ü���� ���α׷����� �ٽ� #2.
// => Ÿ���� ���鶧 ���¸� ��Ÿ���� ����Ÿ�� ���¸� ������ ������ �����ϴ� �Լ���
//    ��� Ÿ���� ������

// C  ����ü : ����ü �ȿ� �Լ��� ������ ����.
// C++����ü : ����ü �ȿ� �Լ��� ������ �ִ�.

struct Rect
{
	// ��� ����Ÿ ( �ٸ����� "�ʵ�" ��� ��� ���)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ�( �ٸ� ���� "�޼ҵ�" ��� ǥ��)
	// => Ư¡ : �Լ� �ȿ��� ��� ����Ÿ�� ���� ���� �Ҽ� �ִ�.
	int getRectArea()
	{
		return (right - left) * (bottom - top);
	}

	void drawRect()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1,1, 10,10 };

	int n1 = rc.getRectArea();

	rc.drawRect();

//	int n1 = getRectArea(rc);
//	drawRect(rc);

}