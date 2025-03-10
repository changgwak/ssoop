// C++ 함수 특징 3. inline   .. 36page


       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

// #1. 인라인 함수의 의미
// => 함수 호출시, 실제 호출이 아닌 기계어 코드치환 해달라는 것
// => 장점 : 빠르다.
// => 단점 : 함수의 크기가 큰데, 여러번 치환되면 코드메모리 증가
//		    add2 이 경우는 크기가 작으므로 전혀 문제 되지 않는다.
int main()
{
	int n1 = add1(1, 2); // 1. 인자 2개를 약속된 장소에 넣고(레지스터 또는 스택)
						 // 2. 함수로 이동


	int n2 = add2(1, 2);  // add2 의 기계어 코드 자체를 이부분에 치환
						  // mov eax, 2
						  // add eax, 1
						  // mov n2, eax
}
