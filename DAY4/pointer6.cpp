int main()
{
	int x[3] = { 1,2,3 };

	int (*p1)[3] = &x;	// 1차 배열의 주소

	int* p2 = x;	// 1차 배열의 이름 => 1번째 요소의 주소


	int y[2][2] = { {1,2},{3,4} };

	int (*p3)[2][2] = &y; // 2차 배열의 주소

	int (*p4)[2] = y;	// 2차 배열의 이름 => 1번째 요소의 주소!!
				// 1번째 요소는 1차 배열(int[2])
				// 1차 배열의 주소
}