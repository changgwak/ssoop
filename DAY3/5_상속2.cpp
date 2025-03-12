// protected.   135 page ~

class Base
{
private:	// 자신의 멤버 함수만 접근 가능
	int a;	

protected:	// 자신과 파생 클래스의 멤버 함수만 접근 가능
	int b;	

public:    // 어디서도 접근 가능
	int c;	

	void set_a(int v)
	{
		if (v > 0 && v < 10)
			a = v;
	}
};




class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error. 기반 클래스 private 멤버는 파생 클래스 라도
				// 접근 안됨. 변경하려면 기반 클래스 함수 사용 set_a(0)등
		b = 0;  // ok

		c = 0;  // ok
	}
};

int main()
{
	Base base;
	base.a = 0;		// error
	base.b = 0;		// error
	base.c = 0;		// ok
}
