//실습2.구구단 만들기
//1~9단까지 모두 출력해보기

#include <iostream>
using namespace std;

int gugudan() {
	int i, j;
	cout << "1~9단 출력" << endl;
	for (i = 1; i < 10; i++) {
		cout << "---- " << i << "단 ----" << endl;
		for (j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}

	return 0;
}