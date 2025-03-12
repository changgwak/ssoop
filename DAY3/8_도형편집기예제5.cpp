// 예제1     149 page
#include <iostream>
#include <vector>

// #4. 모든 파생 클래스(도형)의 공통의 특징은 반드시 기반 클래스(Shape)
//     에도 있어야 한다.
// => 문법적인 규칙이 아닌 디자인 원칙
// => 그래야 Shape* 로 해당 특징(draw) 를 사용할수 있다.


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



