#include <iostream>
#include <list>
using namespace std;

int day10_practices_list() {
	int fours = 0;
	//�ǽ�1. list ����غ���
	//1. std::list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };

	//2. 4�� �� ������ ���
	cout << "����Ʈ: ";
	for (auto it = myList.begin(); it != myList.end(); it++) { // ����Ʈ�� �� ��� �ѷ�����
		if (*it == 4) fours++;
		cout << *it << " ";
	}
	cout << endl;
	cout << "4�� ���� : " << fours << endl;
	//3. { 1, 1, 2, 3, 4, 4, 5 } �� �������� ����Ʈ ����
	cout << "����Ʈ ����: ";
	myList.sort(); // �������� ����
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//4. {1, 2, 3, 4, 5} �� �������� ����Ʈ ����
	cout << "������: ";
	myList.unique();
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//5. { 1, 2, 3, 4, 5, 6, 7 } �� �������� ����Ʈ ����
	cout << "�� �ڿ� �߰�: ";
	myList.push_back(6);
	myList.push_back(7);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//6. { 0, 1, 2, 3, 4, 5, 6, 7 } �� �������� ����Ʈ ����
	cout << "�� �տ� �߰�: ";
	myList.push_front(0);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//7. 3~6�� ����Ʈ���� �����ϴ� �Լ� ���
	return 0;
}