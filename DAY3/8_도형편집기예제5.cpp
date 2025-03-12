// 예제1     149 page
#include <iostream>
#include <vector>

// #4. 모든 파생 클래스(도형)의 공통의 특징은 반드시 기반 클래스(Shape)
//     에도 있어야 한다.
// => 문법적인 규칙이 아닌 디자인 원칙
// => 그래야 Shape* 로 해당 특징(draw) 를 사용할수 있다.


// #5. 기반 클래스의 멤버 함수중에서 파생 클래스가 다시 만들게 되는 것은
//     반드시 가상함수로 해야 한다.

class Shape
{
	int color = 0;
public:
	// 아래 함수는 virtual 로 할까요 ? non-virtual 할까요 ?
	// => 파생 클래스가 override 할 이유 없습니다. non-virtual!!
	void set_color(int c) { color = c; }

	// 면적을 구하는 방법은 도형마다 다릅니다.
	// => 파생 클래스가 override 해야 합니다.
	// => virtual 이 되어야 합니다.
	virtual int get_area() const { return -1; }

	virtual void draw() const { std::cout << "draw shape\n"; }
};



class Rect : public Shape
{
public:
	virtual void draw() const { std::cout << "draw rect\n"; }
};
class Circle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw circle\n"; }
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



