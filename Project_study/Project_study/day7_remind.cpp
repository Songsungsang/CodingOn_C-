#include <iostream>
using namespace std;

int day7_remind() {
	// 포인터 변수: 메모리 주소를 저장하는 변수
	//const(constant): 상수
	//const 포인터
	int i = 100;
	// 1. 주소를 바꿀 수 없도록 하는 역할
	int* const ptr = &i;
	// 2. 주소가 가리키는 메모리의 값을 바꿀 수 없도록 하는 역할
	const int* ptr2 = &i;

	return 0;
}