#include <iostream>
#include "func.h"
using namespace std;

int fileGlobalVar = 0;

int staticFunc() {
	static int staticVar = 0; // �����Ҷ��� �ʱ�ȭ�� �ѹ� �ǰ� ���� ����
	staticVar++;
	return staticVar;
}

int normalFunc() {
	int normalVar = 0;
	normalVar++;
	return normalVar;
}

void globalFunc() {
	fileGlobalVar++;
}

int day6_main() {
	//cout << add(10, 20) << endl;
	//cout << sub(20, 10) << endl;
	//cout << mul(20, 10) << endl;
	//cout << divide(27, 4) << endl;

	staticFunc();
	staticFunc();
	cout << "Static: " << staticFunc() << endl; // ������ ������

	normalFunc();
	normalFunc();
	cout << "Noraml: " << normalFunc() << endl; // ������ ������

	globalFunc();
	globalFunc();
	globalFunc();
	cout << "Global: " << fileGlobalVar << endl; // ������ ������

	cout << "��¥ ���� ����: " << realGlobalVar << endl;
}