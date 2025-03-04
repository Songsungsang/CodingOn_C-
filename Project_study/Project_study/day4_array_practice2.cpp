//실습2.배열 연습(2)
//(1)city2 라는 배열 변수를 선언하고, 5개의 나라 이름은 사용자가 콘솔에 입력한 값으로 지정
//(2)for문 혹은 for - each문을 활용하여 city2의 모든 원소 출력

#include <iostream>
using namespace std;

int day4_array2() {
	int i = 0;
	string city2[5] = {};

	for (i = 0; i < 5; i++) {
		cout << "나라 이름을 입력해주세요: ";
		cin >> city2[i];
	}

	for (string city : city2) {
		cout << city << endl;
	}

	return 0;
}