#include <iostream>
#include "func.h"
using namespace std;

int fileGlobalVar = 0;

int staticFunc() {
	static int staticVar = 0; // 선언할때만 초기화가 한번 되고 값이 유지
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
	cout << "Static: " << staticFunc() << endl; // 변수가 유지됨

	normalFunc();
	normalFunc();
	cout << "Noraml: " << normalFunc() << endl; // 변수가 유지됨

	globalFunc();
	globalFunc();
	globalFunc();
	cout << "Global: " << fileGlobalVar << endl; // 변수가 유지됨

	cout << "진짜 전역 변수: " << realGlobalVar << endl;
}