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

class Triangle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw triangle\n"; }
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
				s->draw(); // �� ������ �ڵ��
							// "������ ǥ����(�ڵ�) ������
							//  ��Ȳ(������ü)�� ���� �ٸ��� �����մϴ�."
							// => ������(polymorphism) �̶�� �մϴ�.

				// ��ü���� ���α׷����� 3���� Ư¡ 
				// => ĸ��ȭ(private, public)
				// => ���
				// => ������(polymorphism)

				// �������� OCP �� �����ϴ� ���� ���� �ڵ� ��Ÿ���Դϴ�.
				// => �ᱹ "�����Լ�" �� �߿�
			}
		}
	}
}

// Shape* s = &Rect; �϶�

// s �δ� Rect �� �߰��� ����� ���� �ȵ˴ϴ�.
// 
// 1. Rect �� �߰��� ��� ����Ÿ ���� : ��� ����Ÿ�� private �� �ִ�.
//									  s �� ����ؼ� �ܺο��� ������ ���� ����
// 
// 2. Rect �� �߰��� ��� �Լ�   ���� : Shape ���� �ֵ��� �����Լ��� ���� �ϰ�
//									 Rect �� override �ϴ� ���� ��Ģ!!
//									��, ������ ����� ����
// s->draw()
// 
// => Rect�� draw() �ȿ��� Rect �� �߰��� ��� �����ϴ� ���� ���� ����.

