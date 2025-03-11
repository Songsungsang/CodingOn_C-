#include <iostream>
#include <vector> // string�� ��ü�ϴ� ���ο� �ڷ��� ����
#include<algorithm>
using namespace std;

int day10_vector() {
	vector<int> vec = {1, 2, 3, 4}; // int ���� �ڷ����� �̸� vec. ���� �迭�� ������ �������� �����
	vector<int> vec2(5, 10); // 10�� 5�� �־���

	for (int i = 0; i < vec.size(); i++) { // �����ŭ �ݺ�
		cout << vec[i] << endl;
	}

	for (int i = 0; i < vec.end() - vec.begin(); i++) { // ������ �������� ���� �������� �ݺ��� ���ϱ�. vec.begin�� �ݺ��ڶ�� �ڷ����� ���ΰ���
		cout << vec[i] << endl;
	}

	//vector<int>::iterator it; // �ݺ��� �ڷ���

	for (auto it = vec.begin(); it != vec.end(); it++) { // ���� ���� iterator�� ������ ��
		cout << *it << endl; // ������ ������. ���� �ҷ��ö� �������� �ҷ��� �� ����
	}

	vec = { 1,2,3,4,5,6 };

	vec.push_back(7);
	vec.pop_back();
	vec.insert(vec.begin() + 3, 10); // �߰��� �ֱ�. �ݺ��� being���� �����ؼ� 3ĭ �̵�
	cout << vec[1] << endl;

	vec = { 3, 1, 4, 2, 7, 5, 6, 8, 9 };
	sort(vec.begin(), vec.end()); //�������� ����. �ݺ��ڸ� ����Ͽ� ó���� �� ����. #include <algorithm���� �ҷ���>
	cout << vec[0] << endl;

	vector<vector<int>> vec2d = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // 2���� ����
	vector<vector<int>> vec2d2(3, vector<int>(3, 0)); // 2���� ����. 0�� 3�� ���� vector�� 3�� ���� vector�� ����

	for (int i = 0; i < vec2d.size(); i++) { // �ٱ��� ������
		for (int j = 0; j < vec2d[i].size(); j++) { // ���� ������ ������
			cout << vec2d[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}