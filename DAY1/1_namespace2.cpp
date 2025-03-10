#include <stdio.h>

// namespace 에 있는 함수는 접근하는 방법

namespace Audio 
{
	void init() { printf("Audio init\n");	}
}
namespace Video
{
	void init()	{ printf("Video init\n");	}
}

// void init()	{ printf("System init\n");	}

int main()
{
	// namespace 에 있는 이름에 접근하는 3가지 방법
	// #1. 완전한 이름 사용(qualified name)
	Audio::init();

	// #2.using declaration(선언)
	using Audio::init;  // Audio의 init() 한개만 Audio 이름 없이 사용하겠다는 의미
	init();

	// #3. using directive(지시어)
	using namespace Audio; // Audio 안의 모든 이름을 Audio 이름 없이 사용하겠다는 의미
	init(); // 뿐 아니라 다른 모든 이름도 Audio 없이 사용가능

}
