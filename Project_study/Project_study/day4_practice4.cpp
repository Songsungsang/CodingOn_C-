//실습4.사용자가 입력한 숫자 더하기
//
//사용자가 입력한 숫자들을 계속 더하는 프로그램 만들기
//•
//사용자는 더하고 싶은 숫자를 횟수 제한 없이 입력할 수 있다.
//•
//단, 0을 입력하면 종료

#include <iostream>
using namespace std;

int main() {
	int num = 1, total = 0;

	cout << "사용자가 입력한 숫자 더하기" << endl << endl;
	while (num != 0) {
		cout << "숫자를 입력하세요 (0: exit) : ";
		cin >> num;
		total = total + num;
	}

	cout << "사용자가 입력한 수의 합은 : " << total;

	return 0;
}