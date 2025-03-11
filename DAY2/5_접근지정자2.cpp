#include <iostream>
#include <string>


// struct : 접근 지정자 생략시 디폴트가 public 
// class  : 접근 지정자 생략시 디폴트가 private

// C++ : class 와 struct 의 차이점은 오직 한가지 입니다.
//		 접근지정자 생략시 디폴트의 차이

// C#, Java : class 와 struct 는 완전히 다릅니다.
//			  해당언어 공부해 보세요

// Rust : class 키워드 없음, struct 만으로 모든것을 만듬.


//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;

public:			
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;


	p.set_age(-10);
}
