class Sample
{
	int n;
	const int c;

public:
	Sample(int v) : n(0), c(v) // ?? ok. 초기화!
	{
//		c = v; // ?? 될까요 ?
				// error. const 는 대입될수 없습니다.
	}
};

int main()
{
	Sample s(3);
}