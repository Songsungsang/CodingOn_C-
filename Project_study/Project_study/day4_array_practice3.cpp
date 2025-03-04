//실습2.배열 연습(2)
//(1) grade 라는 배열 변수를 선언하고, 학생 5인의 성적 입력받기
//(2) for문 혹은 for - each문을 활용하여 학생 5인의 성적 평균 산출

#include <iostream>
using namespace std;

int day4_array3() {
	int grade[5] = {};
	int i, total = 0;
	float average = 0;

	for (i = 0; i < 5; i++) { // 성적 입력
		cout << i+1 << "번 학생의 성적을 입력하세요: ";
		cin >> grade[i];
	}

	for (i = 0; i < 5; i++) { // 성적 총합 구하기
		total = total + grade[i];
	}
	average = total / 5.0; // .0 안 붙히면 정수로 나옴. 명시적 형변환의 경우 total 앞에 (double) 붙임
	cout << "성적 평균 : " << average << endl;

	return 0;
}