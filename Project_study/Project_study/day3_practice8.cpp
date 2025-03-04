//실습8.가장 오른쪽에 있는 1비트의 위치 찾기
//임의의 num이 주어졌을 때, 가장 오른쪽의 1비트가 위치한 자리수를 출력하세요.

#include <iostream>
using namespace std;

int day3_num8() {
	//int num4;
	//cout << "Q4. 임의의 숫자를 입력해주세요:";
	//cin >> num4;
	//bool isSet = (num4 & (1 << 4)) != 0;
	//cout << "Q4. 정답: " << (isSet ? 1 : 0) << endl;

	int num, position = 0, i = 0;

	cout << "임의의 숫자를 입력해주세요: ";
	cin >> num;

	if (num == 0) {
		cout << "입력값이 0입니다";
	}
	else {
		while (position == 0) {
			//if (num == 0) break; 해당 if를 밖으로 뺄 수 있음 
			if (num & (1 << i)) { // 1을 현재자리까지 shifting 한게 true라면. 1을 i까지 shift해서 &로 비교
				position = i;
			}
			i++;
		}

		cout << "가장 오른쪽의 1이 위치한 자리: " << position;
	}

	return 0;
}