// 아래 코드는 godbolt.org 에 넣으세요

int main()
{
	int n = 0;

	// 아래 2줄과 
	int* p1 = &n; 
	*p1 = 10;

	// 아래 2줄의 기계어 코드를 비교 하세요.
	int& r1 = n;
	r1 = 10;
}


