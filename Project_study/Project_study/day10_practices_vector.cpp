#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int day10_practices_vector() {
	////실습1.vector 조작하기
	////1. Vector를 사용하여 정수를 저장하는 빈 벡터 선언
	//int i, input, input2;
	//vector<int> vec; // 안의 배열 사이즈 지정없이 vector 선언
	////2. 사용자로부터 5개의 정수를 입력받아 벡터에 추가
	//for (i = 0; i < 5; i++) {
	//	cout << i << " 번째 정수를 1개 입력: ";
	//	cin >> input;
	//	vec.push_back(input); // vec의 끝에 input 삽입
	//}
	////3. 벡터의 크기 출력
	//cout << "벡터 사이즈: " << vec.size() << endl;
	////4. 벡터의 모든 원소 출력
	//for (int num : vec) {
	//	cout << num << " ";
	//}
	//cout << endl;
	////5. 가장 큰 값을 찾아 출력
	//// int maxVal = *max_element(vec.begin(), vec.end()); // 이런 방식도 가능. iterator에 *를 붙여서 값을 불러오도록 함.
	//sort(vec.begin(), vec.end()); // 오름차순 정렬
	//cout << "가장 큰 수: " << vec[4] << endl;
	////6. 벡터의 모든 원소를 두배로
	//for (int& num : vec) { // & = 배열의 해당 위치의 값을 직접 보겠다.
	//	num *= 2; // 해당 메모리의 값을 두배 곱하기
	//}
	//for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
	//}
	//cout << endl;
	////7. 인덱스를 입력받아 해당 인덱스에 있는 원소 제거
	//cout << "제거하고 싶은 vector의 index 입력: ";
	//cin >> input;
	//vec.erase(vec.begin() + input); // 반복자를 넣어주고 index를 넣어서 erase 사용
	//for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
	//}
	//cout << endl;
	////8. 인덱스를 입력받아 해당 인덱스에 있는 새로운 원소 삽입
	//cout << "입력하고 싶은 vector의 index 입력: ";
	//cin >> input;
	//cout << "입력하고 싶은 int 숫자 입력: ";
	//cin >> input2;
	//vec.insert(vec.begin() + input, input2);
	//for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
	//}
	//cout << endl;

	//실습2. 2차원 행렬 만들기
	//사용자가 입력한 행(rows)과 열(cols) 크기에 맞는 동적 2차원 배열을 생성하고,
	//각 요소를(i + 1)* (j + 1) 값으로 초기화한 후, 출력한 뒤 메모리를 해제하는 프로그램을 작성하세요.
	//int row, col, i, j;
	//cout << "행, 열 숫자 입력: ";
	//cin >> row >> col;
	//cout << row << " " << col << endl;

	//vector<vector<int>> vec(row, vector<int>(col)); // 벡터 정의

	//for (i = 0; i < row; i++) {
	//	for (j = 0; j < col; j++) {
	//		vec[i][j] = (i + 1) * (j + 1);
	//	}
	//}
	//for (i = 0; i < row; i++) {
	//	for (j = 0; j < col; j++) {
	//		cout << vec[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//실습3. 2차원 행렬 만들기
	//사용자가 입력한 행(rows)과 열(cols), 행렬의 원소를 직접 입력하도록 구현하고
	//각 행과 열의 합을 구하도록 구현해보세요.

	int row, col, i, j, val, total;
	cout << "행, 열 숫자 입력: ";
	cin >> row >> col;
	vector<vector<int>> vec(row, vector<int>(col, 0)); // 벡터 정의 및 초기값 0 지정
	
	cout << "행렬 원소를 입력하세요: " << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cin >> val; // 입력 j개를 한번에 받는 느낌
			vec[i][j] = val;
		}
	}
	cout << "행렬 원소 입력 값: " << endl;
	for (i = 0; i < row; i++) {
		for (int num : vec[i]) {
			cout << num << " ";
		}
		cout << endl;
	}

	cout << "각 행의 합: " << endl;
	for (i = 0; i < row; i++) {
		cout << "행" << i+1 << ": ";
		total = 0;
		for (int num : vec[i]) {
			total += num;
		}
		cout << total << endl;
	}
	cout << "각 열의 합: " << endl;
	for (j = 0; j < col; j++) {
		cout << "열" << j + 1 << ": ";
		total = 0;
		for (i = 0; i < row; i++) {
			total += vec[i][j];
		}
		cout << total << endl;
	}

	return 0;
}