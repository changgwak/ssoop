// ����1     149 page
#include <iostream>
#include <vector>


class Shape
{
	int color = 0;
public:

};

class Rect : public Shape
{
public:
	void draw() const { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	void draw() const { std::cout << "draw circle\n"; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if      (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto s : v) // s �� Shape* �Դϴ�.
				s->draw();	// A. error
		}
	}
}
// �� �ڵ�� ���? �� ?�����ϱ�� ?
// => A �κ�. 
// => s�� Ÿ���� Shape* �ε�, Shape ���� draw �� �����ϴ�.
// => Shape* �δ� Shape �� ����� ���ٰ����ϰ�
//    Rect, Circle �� �߰��� ��� ���� �ȵ�. 
// 
// �ذ�å�� ����� ?
// => ���� �ҽ�����!!!
// �̼ҽ��� ������ ������ ��Ȯ�� �˾� �μ���


