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
			// 해결책 #1. Shape* 인 s 를 Rect* 또는 Circle* 로 캐스팅
			// => s가 가리키는 곳이 Rect 인지 Circle 인지 조사해야 한다.
			// => 조사 방법은 내일 배우게 됩니다.
			for (auto s : v)
			{
				if ( s가 Rect 를 가리키면 )
					static_cast<Rect*>(s)->draw();
				
				else if (s가 Circle 를 가리키면)
					static_cast<Circle*>(s)->draw();
			}
		}
	}
}


