#include <iostream>

// 3. Ŭ���� �Ѱ��� ����� �ҽ� ���Ϸ� �ۼ�

// �����Ϸ��� : ���� �ҽ��� Vector.cpp �� ���忡 ���ԵǾ�� �մϴ�.
#include "Vector.h"

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}


/*
// ��� include 
#include <�������>  // �����Ϸ��� ��ӵ� �������� ������ ã�Ե˴ϴ�.
					// ǥ�� ��� ���� include  �Ҷ� ���

#include "�������"  // ���� ���丮���� ������ ã�� �˴ϴ�.
					// ����ڰ� ���� ��� ������ include �Ҷ�
*/