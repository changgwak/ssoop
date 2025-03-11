class Sample
{
	int n;

	const int c;

public:
	Sample(int v)
	{
		c = v; // ?? µÉ±î¿ä ?
	}
};

int main()
{
	Sample s(3);
}