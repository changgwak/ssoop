// 1_namespace.cpp - 교재 6 page
#include <stdio.h>

// namespace
// #1. 프로그램의 구성요소를 논리적으로 분리 하는 것
// #2. 이름 충돌등을 막을수 있다.
// #3. global namespace 라는 용어의 의미

namespace Audio 
{
	// Audio 관련, 함수, 전역변수, 구조체, enum 등을 이곳에 작성.
	void init() { printf("Audio init\n");	}
}
namespace Video
{
	void init()	{ printf("Video init\n");	}
}

// global namespace : 어떠한 이름 공간에도 포함되지 않은 영역
void init()	{ printf("System init\n");	}

int main()
{
	Audio::init();
	Video::init();
	init();
}
