#include <iostream>
using namespace std;

//int addd(int x, int y) { // 순서가 중요. 함수가 아래에 있으면 못 찾을 수 있음
//	return x + y; // 다른 파일에 같은 이름의 함수 있으면 문제 생김
//}

void funcB(int x);

void funcA(int x) { // function 호출의 흐름을 보기
	int localA = x + 1;
	cout << "Function A" << localA << endl;
}

void funcB(int x) {
	int localB = x * 2;
	funcA(10);
	cout << "Function B" << localB << endl;
}

void recursiveFunc(int n) {
	if (n == 0) return;
	cout << "재귀함수 호출" << endl;
	recursiveFunc(n - 1);
}

int study_functions() {
	//cout << addd(10, 20) << endl;
	//cout << addd(20, 30) << endl;
	//cout << addd(30, 40) << endl;

	//int num = 5;
	//funcB(num);
	//cout << num << endl;

	recursiveFunc(3);

	return 0;
}