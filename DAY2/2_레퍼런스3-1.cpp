// 인자로 전단된 값을 수정하지 않고, 읽기만 하려고 합니다
// 다음중 좋은 코드는 ?

void f1(int n) 
{ 
	int k = n; 
}

void f2(const int& n)
{
	int k = n;
}
int main()
{
	int x = 0;
	f1(x);
	f2(x);
}