#include <iostream>
using namespace std;

void coutFunc(void (*callback)()) {
	cout << "출력" << endl;
	callback(); // 함수 부르기
}

int addFunc(int a, int b) {
	return a + b;
}

void myCallback() {
	cout << "얘는 콜백이에요" << endl;
}

int day8_pointer2() {
	int i = 0;
	char c = 'a';
	short s = 10;
	double d = 3.14;

	void* ptr = nullptr;
	ptr = &i;
	ptr = &c;
	ptr = &s;
	ptr = &d;
	//*ptr; // void pointer를 역참조 하려고 하니까 에러나 감.
	// 타입이 정해져 있지 않음 = 읽는 크기와 자료형이 지정되지 않음.
	double* tmp = (double*)ptr; // 강제로 type casting하고 변수 써야 참조가능
	cout << *tmp << endl;

	//int i = new int; // 일반적은 변수들은 변수가 compile되는 시점에 이미 메모리가 결정됨
	// = 동적인 메모리 영역 할당 불가능
	// 아래와 같이 공간 할당
	int* iPtr = new int(10);
	cout << *iPtr << endl;
	// 메모리 해제
	delete iPtr;

	//int size;
	//cout << "사이즈 입력: ";
	//cin >> size; // 배열의 크기를 입력받아 동적으로 할당하고 싶음
	////int iArr[idx] = {}; // int iArr[idx] 같은 식으로는 배열 못만듬. 왜? idx 값이 compile할때 모르니까.
	//int* iArr = new int[size]; // 동적으로 정해야 하니 배열 메모리를 새로 만듬.
	//// 이 새로만든 메모리는 메모리가 아니라 heap영역이고 기존 변수로는 메모리 못보니 포인터 사용

	//for (int i = 0; i < size; i++) {
	//	iArr[i] = (i + 1) * 10;
	//}

	//for (int i = 0; i < size; i++) {
	//	cout << "출력: " << iArr[i] << endl;
	//}

	//delete[] iArr; // 선언할떄 배열로 선언했으니까 delete에도 [] 사용해 메모리 해제

	//int a = 100;
	//int* dptr = &a;
	//int** ddPtr = &dptr;

	//cout << "포인터: " << *dptr << endl;
	//cout << "이중포인터: " << **ddPtr << endl;
	// 이중 포인터로 배열 만들기
	int row = 3;
	int col = 3;

	int** matrix = new int*[row]; // row를 생성. 이중 포인터로 포인터를 담음

	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col]; // 배열의 각각의 원소로 새로운 배열을 담아줌
	}

	for(i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = i + j; // 배열의 각각의 배열에 값을 할당. 2차원 배열 상태
		}
	}

	for (i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// delete - 현재 포인터 배열 안에 포인터를 만든 형태.
	// 그럼 해제를 안쪽부터? 바깥쪽부터? 안쪽부터
	for (i = 0; i < row; i++) {
		delete[] matrix[i]; // 각각 안도 배열이니까 제거됨
	}
	delete[] matrix; // 바깥쪽 전체도 배열 날리기

	//함수 포인터
	//void (*funcPtr)() = nullptr;
	//funcPtr = coutFunc; // coutFunc 함수 이름 자체가 주소를 가지고 있음
	//funcPtr(); // 함수가 실행됨

	//int(*funcPtr2)(int, int) = nullptr; // 매개변수 자료형 int와 int
	//funcPtr2 = addFunc;
	//cout << funcPtr2(10, 20) << endl;

	coutFunc(myCallback);

	return 0;
}