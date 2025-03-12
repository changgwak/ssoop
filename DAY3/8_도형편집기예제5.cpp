// ����1     149 page
#include <iostream>
#include <vector>

// #4. ��� �Ļ� Ŭ����(����)�� ������ Ư¡�� �ݵ�� ��� Ŭ����(Shape)
//     ���� �־�� �Ѵ�.
// => �������� ��Ģ�� �ƴ� ������ ��Ģ
// => �׷��� Shape* �� �ش� Ư¡(draw) �� ����Ҽ� �ִ�.


// #5. ��� Ŭ������ ��� �Լ��߿��� �Ļ� Ŭ������ �ٽ� ����� �Ǵ� ����
//     �ݵ�� �����Լ��� �ؾ� �Ѵ�.

class Shape
{
	int color = 0;
public:
	// �Ʒ� �Լ��� virtual �� �ұ�� ? non-virtual �ұ�� ?
	// => �Ļ� Ŭ������ override �� ���� �����ϴ�. non-virtual!!
	void set_color(int c) { color = c; }

	// ������ ���ϴ� ����� �������� �ٸ��ϴ�.
	// => �Ļ� Ŭ������ override �ؾ� �մϴ�.
	// => virtual �� �Ǿ�� �մϴ�.
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



