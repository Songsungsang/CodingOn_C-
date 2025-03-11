#include <iostream>
#include <list>
using namespace std;

int day10_list() {
	list<int> myList = { 1,2,3,4,5 }; // ����Ʈ ����

	// ����Ʈ �߰� ����
	myList.push_back(6);
	myList.push_front(0); // �� �տ� ���Ḹ �ϸ� �Ǵ� �ð��� ���ͺ��� ��������� ����

	list<int>::iterator it = myList.begin(); // auto it ����
	advance(it, 2);
	myList.insert(it, 10);
	advance(it, 1);
	myList.erase(it);
	cout << "���ŷο���" << endl;

	myList.remove(5); // ���Ҹ� ��� �����
	myList = { 1,2,3,4,5 };

	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << endl;
	}

	//myList.remove_if([](int n) {return n % 2 == 0;}); // 2�� ������ �������� 0 �̸� ������ = ¦�� ���ֱ�

	list<int> list1 = { 1, 2, 3 };
	list<int> list2 = { 4, 5, 6 };

	//list1.merge(list2); // ����Ʈ ����
	list1.splice(++list1.begin(), list2); //list1�� ���� ���� �ڸ�(1~2����) list2 �����ֱ�

	cout << "��";

	return 0;
}