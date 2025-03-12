// ����1     149 page
#include <iostream>
#include <vector>

// #4. ��� �Ļ� Ŭ����(����)�� ������ Ư¡�� �ݵ�� ��� Ŭ����(Shape)
//     ���� �־�� �Ѵ�.
// => �������� ��Ģ�� �ƴ� ������ ��Ģ
// => �׷��� Shape* �� �ش� Ư¡(draw) �� ����Ҽ� �ִ�.


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

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 9)
		{
			for (auto s : v)
			{
				s->draw();
			}
		}
	}
}



