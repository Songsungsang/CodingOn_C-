#include <iostream>
#include <bitset>
using namespace std;

int array_study() {
	int numbers[5] = {10, 20, 30, 40, 50};
	int i, j;
	//indexing - 배열의 이름을 쓰고 해당 번호를 써서 해당하는 번호를 자료를 불러옴
	for (i = 0; i < 5; i++) {
		cout << numbers[i] << endl;
	}

	string words[2][2] = { {"가", "나"}, {"다", "라"} };
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << words[i][j];
		}
		cout << endl;
	}

	for (int num : numbers) { // for - each 문법의 for문
		cout << num << endl;
	}


	return 0;
}