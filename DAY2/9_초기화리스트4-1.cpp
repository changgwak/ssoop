class Sample
{
	int n;
	const int c;

public:
	Sample(int v) : n(0), c(v) // ?? ok. �ʱ�ȭ!
	{
//		c = v; // ?? �ɱ�� ?
				// error. const �� ���Եɼ� �����ϴ�.
	}
};

int main()
{
	Sample s(3);
}