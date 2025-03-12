// 148 page ~
#include <iostream>

class Base
{
public:
	Base()  {  }
	~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d;		// ok. 문제 없음

//	Derived* p = new Derived;
//	delete p;		// ok. 문제 없음
		

	// 아래 코드가 문제 입니다.
	Base* p = new Derived;
	delete p;	


}