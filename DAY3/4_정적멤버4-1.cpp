// 4_정적멤버4-1.cpp

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
						// 컴파일러의 원리
	c.set(10, 20);		// 
	Car::foo(10, 20);	//
}