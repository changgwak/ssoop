// 인자로 전단된 값을 수정하지 않고, 읽기만 하려고 합니다
// 다음중 좋은 코드는 ?

void f1(int n) 
{ 
	int k = n; 
}

void f2(const int& n)
{
	// n 은 reference 지만 원리상 포인터 사용하는 경우가 대부분
	int k = n; // 따라서 이코드는
				// int k = *(n내부포인터) 이므로 접근시 오버헤드발생
}

int main()
{
	int x = 0;
	f1(x);
	f2(x);
}