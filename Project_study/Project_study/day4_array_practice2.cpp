//�ǽ�2.�迭 ����(2)
//(1)city2 ��� �迭 ������ �����ϰ�, 5���� ���� �̸��� ����ڰ� �ֿܼ� �Է��� ������ ����
//(2)for�� Ȥ�� for - each���� Ȱ���Ͽ� city2�� ��� ���� ���

#include <iostream>
using namespace std;

int day4_array2() {
	int i = 0;
	string city2[5] = {};

	for (i = 0; i < 5; i++) {
		cout << "���� �̸��� �Է����ּ���: ";
		cin >> city2[i];
	}

	for (string city : city2) {
		cout << city << endl;
	}

	return 0;
}