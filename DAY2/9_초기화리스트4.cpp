#include <string>

class Person1
{
	std::string name;
	int age;
public:
	// #1. 생성자 {} 안에서 멤버 데이타에 값을 넣은 경우
	Person1(const std::string& n, int a) 
	{
		// call std::string::string() <= 즉, name 에 대해서 디폴트 생성자 호출

		name = n;	// 대입. 
					// 즉, 이코드는 2번의 함수 호출로 name 에 값을 넣은 것
					// std::string name;
					// name = n; 
					// 의 의미
		age = a;
	}
};

Person1 p1{ "kim", 20 };





class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		// call std::string::string(n) <= 즉, 인자 한개 생성자 호출
		//								 생성자 호출 1회로 초기화 한것
	}
};

Person2 p2{ "kim", 20 };


// 결론 : 생성자에서 멤버 데이타를 초기화 할때
// => 멤버 초기화 리스트에서 하는 것이 빠릅니다!!
// => 대입이 아닌 진짜 초기화(생성자로 초기화 한것)


// std::string 은 실제 클래스이름이 아닌 alias 입니다.
// => 실제 클래스 이름은 std::basic_string 인데, 복잡한 템플릿 입니다.
//using string = std::basic_string<char, std::char_traits<char>, std::allocator<char>>;

