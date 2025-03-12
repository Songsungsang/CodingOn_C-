#include <iostream>
#include <list>
using namespace std;

int day10_practices_list() {
	int fours = 0;
	//실습1. list 사용해보기
	//1. std::list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };

	//2. 4가 몇 개인지 출력
	cout << "리스트: ";
	for (auto it = myList.begin(); it != myList.end(); it++) { // 리스트의 각 요소 둘러보기
		if (*it == 4) fours++;
		cout << *it << " ";
	}
	cout << endl;
	cout << "4의 갯수 : " << fours << endl;
	//3. { 1, 1, 2, 3, 4, 4, 5 } 가 나오도록 리스트 변경
	cout << "리스트 정렬: ";
	myList.sort(); // 오름차순 정렬
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//4. {1, 2, 3, 4, 5} 가 나오도록 리스트 변경
	cout << "고유값: ";
	myList.unique();
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//5. { 1, 2, 3, 4, 5, 6, 7 } 이 나오도록 리스트 변경
	cout << "값 뒤에 추가: ";
	myList.push_back(6);
	myList.push_back(7);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//6. { 0, 1, 2, 3, 4, 5, 6, 7 } 이 나오도록 리스트 변경
	cout << "값 앞에 추가: ";
	myList.push_front(0);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//7. 3~6은 리스트에만 존재하는 함수 사용
	return 0;
}