#include <iostream>
using namespace std;

int day2_2() {
	int a = 10;
	a = a + 5;
	a += 5;

	//증감연산자
	//값을 한단계 증가하거나 감소
	int b = 0;
	b++; // 전치(위). 담고 더해요
	++b; // 후치(위). 더하고 담아요
	cout << b;

	return 0;
}