// 예제1     149 page
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
			// 해결책 #1. Rect* 또는 Circle* 로 캐스팅
			for (auto s : v)
			{
				static_cast<Rect*>(s)->draw();
			}
		}
	}
}


