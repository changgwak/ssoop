// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>

// 상속
// 개념 : 기존 타입을 확장해서 새로운 타입을 만드는 것

// 표기법
// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student ( Person )
// Java   : class Student extends Person

class Person
{
	std::string name;
	int age;
};

class Student : public Person
{	
	int    id;
};

class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
