//�ǽ�2.�迭 ����(2)
//(1) grade ��� �迭 ������ �����ϰ�, �л� 5���� ���� �Է¹ޱ�
//(2) for�� Ȥ�� for - each���� Ȱ���Ͽ� �л� 5���� ���� ��� ����

#include <iostream>
using namespace std;

int day4_array3() {
	int grade[5] = {};
	int i, total = 0;
	float average = 0;

	for (i = 0; i < 5; i++) { // ���� �Է�
		cout << i+1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> grade[i];
	}

	for (i = 0; i < 5; i++) { // ���� ���� ���ϱ�
		total = total + grade[i];
	}
	average = total / 5.0; // .0 �� ������ ������ ����. ����� ����ȯ�� ��� total �տ� (double) ����
	cout << "���� ��� : " << average << endl;

	return 0;
}