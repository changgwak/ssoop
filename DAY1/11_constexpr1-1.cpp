int main()
{
	int sz1 = 10;
	const int sz2 = sz1;
	const int sz3 = 10;
	constexpr int sz4 = 10;

	int x1[10];  // ok
	int x2[sz1]; // ?
	int x3[sz2]; // ?
	int x4[sz3]; // ?
	int x5[sz4]; // ?
}