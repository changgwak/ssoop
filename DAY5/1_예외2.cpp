#include <iostream>

// 객체지향 프로그래밍에서의 오류 처리
// => 예외(exception) 라는 기술 사용

// #1. 함수에서 오류가 발생하면 예외를 "던집니다(throw)"

int db_backup()
{
	if (1)
		throw 1; // 예외 던지기

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	int ret = db_backup();

	//	if (ret == -1) {}

	db_remove();
}

