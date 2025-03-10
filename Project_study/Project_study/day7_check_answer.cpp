#include <iostream>
using namespace std;

int check_answer() {
	char cArr[4] = { 1, 1, 1, 1 };
	short* shortPtr = (short*)cArr;
	short sData = *(shortPtr + 1);
	cout << "실습 1번 정답: " << (int)sData << endl;

	short sArr[6] = { 256, 257, 258, 259, 260, 261 };
	char* pC = (char*)sArr;
	char cData = *(pC + 3);
	cout << "실습 2번 정답: " << int(cData) << endl;

	return 0;
}