// 3_변수5
// 30 page ~

// 타입의 별명 만들기

// #1. C언어는 typedef 
typedef int DWORD;
typedef void(*PF)();

// #2. C++11 부터는 using 이 편리합니다
// => 아래 2줄은 위코드와 완전히 동일합니다.
using DWORD = int;
using PF = void(*)();


// #3. using 을 만든이유
// typedef : 타입의 별명만 만들수 있다.
// using   : 타입의 별명 + 템플릿의 별명 을 만들수 있다.

// #4. 하나의 키워드가 여러가지 의미로 사용되는 경우가 있습니다.
// using declaration, directive : namespace 에서 사용
// using alias : 타입의 별명을 만들때 사용




int main()
{
	DWORD n; // int n
	PF    f; // void(*f)()
}

