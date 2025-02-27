//실습1.변수와 자료형
//▪“이름을 입력하세요.” 라는 문구를 출력하고 사용자로부터 이름을 입력 받기
//▪“나이를 입력하세요.” 라는 문구를 출력하고 사용자로부터 나이를 입력 받기
//▪이름과 나이의 입력이 끝나면 "안녕하세요! OOO님(O세)" 라는 문구 출력
#include <iostream>
using namespace std;

int day2_practice1() {
	string name;
	int age;

	cout << "이름을 입력하세요. : ";
	cin >> name;
	cout << "나이를 입력하세요. : ";
	cin >> age;
	
	cout << "안녕하세요! " << name << "님(" << age << "세)" << endl;

	return 0;
}