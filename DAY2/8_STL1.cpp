// 8_STL1.cpp
#include <iostream>
#include <string>

int main()
{
	// #1. C ����� ���ڿ�
	// C���� ����Ÿ��(char) �� �ְ�, "���ڿ� Ÿ��" �� �����ϴ�.
	// => �׷��� ���ڿ��� ���ؼ��� ����Ÿ���ǹ迭 �Ǵ� ���� Ÿ���� �����ͻ��
	char cs1[] = "hello";
	char cs2[] = "hello";

	// ���� : ���ڿ� ���� �ڵ尡 ���������� �ʽ��ϴ�.
	if (cs1 == cs2) {} // ���ڿ� �񱳰� �ƴ�, �迭�� �ּ� ��, �׻� false
	if (strcmp(cs1, cs2) == 0) {} // ���ڵ尡 ���ڿ� ��!

	// #2. C++ ����� ���ڿ� Ÿ��
	// => std::string �̶�� Ÿ���� �̹� ������� �ֽ��ϴ�.
	std::string s1 = "hello";
	std::string s2 = "hello";

	// s1, s2 �� int �� ������ ���� ���� �մϴ�.
	auto s3 = s1 + s2;

	if (s1 == s2) {}

	if (s1 > s2) {}

	auto n = s1.size(); // 5
}