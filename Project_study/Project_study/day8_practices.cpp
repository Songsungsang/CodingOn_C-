#include <iostream>
using namespace std;

int day8_practices() {
	//실습1.동적 2 차원 배열 생성 및 해제
	//사용자가 입력한 행(과 열(cols) 크기에 맞는 동적 2 차원 배열을 생성하고
	//각 요소를(i + 1) * (j + 1) 값으로 초기화한 후, 출력한 뒤 메모리를 해제하는 프로그램을 작성하세요

	int row, col, i, j;
	cout << "열 입력: ";
	cin >> row;
	cout << "행 입력: ";
	cin >> col;

	int** matrix = new int*[row]; // 더블 포인트에 포인터 배열 새로 만들어서 담기

	for (i = 0; i < row; i++) {
		matrix[i] = new int[col]; // 각 포인터 배열 요소마다 새로운 배열 지정
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			matrix[i][j] = (i + 1) * (j + 1); // 각 지점마다 값 지정
		}
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < row; i++) {
		delete[] matrix[i]; // 배열 메모리 먼저 해제
	}
	delete[] matrix; // 포인터 배열 해제

	return 0;
}