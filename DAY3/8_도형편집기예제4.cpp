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

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 9)
		{
			// �ذ�å #1. Shape* �� s �� Rect* �Ǵ� Circle* �� ĳ����
			// => s�� ����Ű�� ���� Rect ���� Circle ���� �����ؾ� �Ѵ�.
			// => ���� ����� ���� ���� �˴ϴ�.
			for (auto s : v)
			{
				if ( s�� Rect �� ����Ű�� )
					static_cast<Rect*>(s)->draw();
				
				else if (s�� Circle �� ����Ű��)
					static_cast<Circle*>(s)->draw();
			}
		}
	}
}


