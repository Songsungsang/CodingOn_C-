//실습7.가장 왼쪽에 있는 1비트의 위치 찾기
//▪임의의 num이 주어졌을 때가장 왼쪽의 1이 위치한 비트 자리를 출력하세요.
//•num은 char로 선언해주세요
//•4번 문제를 참고해주세요
//•반복문을 활용합니다

// 실습4 답안 예시
//int num4;
//cout << "Q4. 임의의 숫자를 입력해주세요:";
//cin >> num4;
//bool isSet = (num4 & (1 << 4)) != 0;
//cout << "Q4. 정답: " << (isSet ? 1 : 0) << endl;

#include <iostream>
using namespace std;

int day3_num7() {
	//int num4;
	//cout << "Q4. 임의의 숫자를 입력해주세요:";
	//cin >> num4;
	//bool isSet = (num4 & (1 << 4)) != 0;
	//cout << "Q4. 정답: " << (isSet ? 1 : 0) << endl;

	// char 대신 int를 사용할 경우
	//int num7;
	//bool isSet;
	//int bit = 8;
	//cout << "Q7. 임의의 숫자를 입력해주세요: ";
	//cin >> num7;
	//while (true) {
	//	if (num7 == 0) {
	//		bit = 0;
	//		break;
	//	}
	//	isSet = (num7 & (1 << bit)) != 0;
	//	if (isSet == true) break;
	//	bit--;
	//}

	//cout << "Q7. 정답: " << bit << endl;

	int num;
	int position = 0;

	cout << "임의의 숫자를 입력해주세요: ";
	cin >> num;

	for (int i = 7; i >= 0; i--) {
		if (num & (1 << i)) { // 1을 현재자리까지 shifting 한게 true라면. 1을 i까지 shift해서 &로 비교
			position = i;
			break;
		}
	}

	cout << "가장 왼쪽의 1이 위치한 자리: " << position;

	return 0;
}