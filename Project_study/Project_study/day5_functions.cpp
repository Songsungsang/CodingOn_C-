#include <iostream>
using namespace std;

//int addd(int x, int y) { // ������ �߿�. �Լ��� �Ʒ��� ������ �� ã�� �� ����
//	return x + y; // �ٸ� ���Ͽ� ���� �̸��� �Լ� ������ ���� ����
//}

void funcB(int x);

void funcA(int x) { // function ȣ���� �帧�� ����
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
	cout << "����Լ� ȣ��" << endl;
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