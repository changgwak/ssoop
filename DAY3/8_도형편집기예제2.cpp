// ����1     149 page
#include <iostream>
#include <vector>


// #2. ��� ������ ������ Ư¡(color��) �� �ִ�.
// => ��� Ŭ������ ���� �����ϸ� �ȴ�.

// #3. ����, ��� Ŭ����(Shape) �� �ִٸ�
// => ��� ������ �Ѱ��� �����̳ʿ� ���� �����Ҽ� �ִ�.
// => ��ü���� �����ο��� ���� �θ� ���Ǵ� ����!!  �߿�!!!


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
	
}



