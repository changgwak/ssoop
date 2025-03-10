// 3_변수2-1.cpp
int main()
{
	int n1 = 3.4; // 이 코드에 대해서 생각해 봅시다.
				  // C/C++에서는 에러 아니지만 아주 나쁜 코드입니다.
				  // 대부분의 다른 언어는 에러

	// prevent narrow : {} 초기화는 데이타 손실, 오버플로우는 모두에러
	int n2 = {3.4}; // error
	int n3{3.4};    // error

	char c1{500}; // error. 1바이트에 500 담을수 없다.
	char c2{128}; // error
	char c3{127}; // ok
}