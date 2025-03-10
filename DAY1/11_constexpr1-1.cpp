int main()
{
	int sz1 = 10;
	const int sz2 = sz1;
	const int sz3 = 10;
	constexpr int sz4 = 10;

	int x1[10];  // ok
	
	int x2[sz1]; // ũ��� ���� ���� ?
				 // C89 ���� : error
				 // C99 ���� : ok
				 // C11 ���� : ǥ�ؿ��� �����Ϸ��� ���� �ٸ����ִٰ� ����
		// C++ : error. ǥ�ؿ��� �迭�� ũ��� ������ �ð��� �˾ƾ� �Ѵٰ� ����
		// �׷���, g++, clang �� Ȯ�� �������� ���!!
		// visual studio �� error.

	int x3[sz2]; // error. runtime constant!! ������ �Ҷ� �˼� ����
	int x4[sz3]; // ok. �����Ϸ��� ���� �˼� �ִ�
	int x5[sz4]; // ok.
}
// �׷�? const �� literal �� �ʱ�ȭ �ϸ�
// => ������ �ð� ����� ��밡���ѵ� ??
// => �� constexpr �� ���� �ʿ��Ѱ��� ??