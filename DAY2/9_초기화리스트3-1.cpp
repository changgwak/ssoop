#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
//	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

// �ٽ� : Point �� ����Ʈ ������ �����ϴ�.
//       �Ʒ� �ڵ尡 �� �������� ã������!
class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	// Point �� ����Ʈ �����ڰ� �����Ƿ� �Ʒ� �ڵ�� ����
	/*
	Rect()
	{
		// call Point::Point() <== �����Ϸ��� �߰��� �ڵ� ������ ����
		std::cout << "Rect()" << std::endl;
	}
	*/
	// �ذ�å
	// => ��� �ʱ�ȭ ����Ʈ ��ġ�� � ���·� �����ڸ� ȣ������ ǥ��
	Rect() : ptFrom(0, 0), ptTo(1, 2) 
	{
		// call Point::Point( 0, 0) <= ptFrom
		// call Point::Point( 1, 2) <= ptTo
		std::cout << "Rect()" << std::endl;
	}


};
int main()
{
	Rect r;
}




