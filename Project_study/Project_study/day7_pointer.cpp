#include <iostream>
using namespace std;

void coutFunc(const int* x) { // 바꿀 수 없는 const 값으로 둠
	cout << "출력: " << *x << endl; // * = 역참조를 하겠다 = 메모리에 담긴 값을 보겠다
}

int day7_pointer() {
	int i = 0; // 4바이트. 정수형으로 봄
	float f = 3.14f; // 4바이트. 실수형으로 봄. 부동소수점 바라봄.
	short s = 100; // 2바이트

	int* iPtr = &i; // &i = i의 메모리 주소. 참조.
	short* sPtr = &s;

	cout << iPtr << endl; // ptr을 출력하면 i의 메모리 주소가 나옴
	cout << sPtr << endl;

	cout << "메모리 주소에 저장된 값: " << *iPtr << endl; // i의 값이 나옴. 역참조.
	cout << "메모리 주소에 저장된 값: " << *sPtr << endl; // i의 값이 나옴. 역참조.

	cout << "iPtr에 1 더하기" << endl;
	cout << iPtr << endl;
	cout << iPtr+1 << endl; // 1만큼 주소를 더함 = 한 블록(4바이트) 더하기 연산처리

	int iArr[4] = {10, 20, 30, 40}; // 16 바이트 사이즈. int 1개는 4바이트니까

	cout << "배열의 이름은? 배열의 주소 맨앞의 주소" << endl;
	cout << *iArr << endl;
	cout << iArr + 1 << endl; // 자료형의 크기만큼 1 더하기
	cout << *iArr + 1 << endl; // 자료형의 크기만큼 1 더하기
	cout << *(iArr + 0) << endl; // iArr[0] 과도 같음. 내부적인 배열의 구성
	cout << *(iArr + 1) << endl; // 
	cout << *(iArr + 2) << endl; // 
	cout << *(iArr + 3) << endl; // 

	int num = 5;
	int *ptr = &num;

	*ptr = 20;
	cout << "포인터로 값을 바꾼 num" << endl;
	cout << num << endl;

	int a = 100;
	coutFunc(&a); // 주소만 전달해서 주소로 값을 참조

	return 0;
}