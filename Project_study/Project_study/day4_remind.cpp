#include <iostream>
using namespace std;

int day4_revise() {
	int i;
	// for문 - 횟수가 정해져 있을때
	for (i = 0; i < 5; i++) {
		cout << 1;
	}
	// 배열의 요소 하나하나마다 보기
	int numbers[4] = {10, 20, 30, 40};
	for (int number : numbers) {
		cout << number << endl;
	}

	// while문 - 횟수 외의 다른 조건에 따라 반복할때
	while (true) {
		//조건을 만족하면
		break;
	}

	return 0;
}