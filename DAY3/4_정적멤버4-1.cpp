// 4_�������4-1.cpp

class Car
{
	int color;
	int speed;
public:
	void set(int c, int s)
	{
		color = c;
		speed = c;
	}
	static void foo(int c, int s)
	{
	}
};
int main()
{
	Car c;
						// �����Ϸ��� ����
	c.set(10, 20);		// 
	Car::foo(10, 20);	//
}