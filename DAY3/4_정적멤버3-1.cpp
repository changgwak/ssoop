#include <iostream>

// static member data Ư¡ ����

class Car
{
	int color = 0;
public:
	static int cnt;	

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// #1. static ��� ����Ÿ�� class �ȿ� �����ϰ�, 
//     class �ܺο��� ���� �ʿ�. �ʱ�ȭ�� �ܺο���

int Car::cnt = 0;

// #2. Car ��ü�� �Ѱ��� �������� �ʾƵ� static ��� ����Ÿ�� �̹� �޸𸮿� ����
// => �� �ڵ尡 �޸𸮿� cnt ������ �Ҵ��ϴ� �ڵ�( ���������� ����)
// => static storage(�������� ���̴� ����)�� �Ҵ�


int main()
{
	// #3. ��ü�� ��� "Ŭ�����̸�::static����̸�" ���� ���� ����
	// ��, public �� �ִ� ��츸
	std::cout << Car::cnt << std::endl; // 0



	// #4. ��ü�� �����ϸ� static �� �ƴ� ��� ����Ÿ�� stack �� ���̰� �˴ϴ�.
	// => sizeof(Car) �Ǵ� sizeof(c1) �� "4(color)" �Դϴ�.
	Car c1;
	Car c2;


	// #5. C++ ������ static ��� ����Ÿ�� 2���� ������� ���� ����
	// => Ŭ�����̸�::����̸�
	// => ��ü�̸�.����̸�

	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt << std::endl;
	std::cout << c2.cnt << std::endl;

	//	=> �� 3���� ��� ���� �޸� �����ϴ� �ڵ�

	// Ŭ���� �̸��� ����ϴ� ���� ����
	// => ��ü�̸� ����, ��ü��ü�� Ư������ ���� �Ҽ� �ִ�.

	// Java, C#, swift, python, Rust ���� ��κ��� ���
	// => "Ŭ���� �̸����θ�" ���� ����
}

