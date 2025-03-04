//실습1. 입력한 숫자만큼 별 찍기
//입출력 예시
//input : 5
//output :
//	*
//	**
//	***
//	****
//	*****

#include <iostream>
using namespace std;

int print_stars() {
	int i, j, input, blank;
	cout << "입출력 예시" << endl;
	cout << "input : ";
	cin >> input;
	cout << "output: " << endl;
	//for (i = 0; i < input; i++) {
	//	for (j = 0; j <= i; j++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	for(i = 1; i < input + 1; i++) { // 별 거꾸로 찍기
		blank = input - i;
		for(j = 0; j <= input; j++) {
			if (j <= blank) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	

	return 0;
}