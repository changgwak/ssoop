// ���ڷ� ���ܵ� ���� �������� �ʰ�, �б⸸ �Ϸ��� �մϴ�
// ������ ���� �ڵ�� ?

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