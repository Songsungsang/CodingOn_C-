#include <iostream>
#include <vector> // string을 대체하는 새로운 자료형 벡터
#include<algorithm>
using namespace std;

int day10_vector() {
	vector<int> vec = {1, 2, 3, 4}; // int 벡터 자료형의 이름 vec. 안의 배열을 사이즈 지정없이 사용중
	vector<int> vec2(5, 10); // 10을 5개 넣어줌

	for (int i = 0; i < vec.size(); i++) { // 사이즈만큼 반복
		cout << vec[i] << endl;
	}

	for (int i = 0; i < vec.end() - vec.begin(); i++) { // 벡터의 마지막과 시작 기준으로 반복수 정하기. vec.begin은 반복자라는 자료형을 따로가짐
		cout << vec[i] << endl;
	}

	//vector<int>::iterator it; // 반복자 자료형

	for (auto it = vec.begin(); it != vec.end(); it++) { // 시작 값을 iterator로 가지려 함
		cout << *it << endl; // 일종의 포인터. 값을 불러올때 역참조로 불러올 수 있음
	}

	vec = { 1,2,3,4,5,6 };

	vec.push_back(7);
	vec.pop_back();
	vec.insert(vec.begin() + 3, 10); // 중간에 넣기. 반복자 being으로 시작해서 3칸 이동
	cout << vec[1] << endl;

	vec = { 3, 1, 4, 2, 7, 5, 6, 8, 9 };
	sort(vec.begin(), vec.end()); //오름차순 정렬. 반복자를 사용하여 처음과 끝 지정. #include <algorithm으로 불러옴>
	cout << vec[0] << endl;

	vector<vector<int>> vec2d = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // 2차원 벡터
	vector<vector<int>> vec2d2(3, vector<int>(3, 0)); // 2차원 벡터. 0을 3개 가진 vector를 3개 가진 vector를 만듬

	for (int i = 0; i < vec2d.size(); i++) { // 바깥의 사이즈
		for (int j = 0; j < vec2d[i].size(); j++) { // 안쪽 각각의 사이즈
			cout << vec2d[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}