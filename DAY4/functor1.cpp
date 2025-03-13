// functor1.cpp - 173

// C++ 초급에서는 "연산자 재정의" 가 많이 사용되지 않지만
// C++ 중급이상의 기술에서는 "연산자 재정의가 아주 중요해 집니다"
// 그래서 C++ 잘하려면 다양한 연산자 재정의 기술을 알아야 합니다.

class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;
	int n1 = p(1, 2);
}
