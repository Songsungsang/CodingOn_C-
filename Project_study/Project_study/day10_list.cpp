#include <iostream>
#include <list>
using namespace std;

int day10_list() {
	list<int> myList = { 1,2,3,4,5 }; // 리스트 선언

	// 리스트 추가 삭제
	myList.push_back(6);
	myList.push_front(0); // 맨 앞에 연결만 하면 되니 시간이 벡터보다 상대적으로 빠름

	list<int>::iterator it = myList.begin(); // auto it 가능
	advance(it, 2);
	myList.insert(it, 10);
	advance(it, 1);
	myList.erase(it);
	cout << "번거로워요" << endl;

	myList.remove(5); // 원소를 집어서 지우기
	myList = { 1,2,3,4,5 };

	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << endl;
	}

	//myList.remove_if([](int n) {return n % 2 == 0;}); // 2로 나눠서 나머지가 0 이면 지워라 = 짝수 없애기

	list<int> list1 = { 1, 2, 3 };
	list<int> list2 = { 4, 5, 6 };

	//list1.merge(list2); // 리스트 병합
	list1.splice(++list1.begin(), list2); //list1의 시작 직후 자리(1~2사이) list2 끼워넣기

	cout << "끝";

	return 0;
}