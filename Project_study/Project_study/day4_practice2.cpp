//�ǽ�2.������ �����
//1~9�ܱ��� ��� ����غ���

#include <iostream>
using namespace std;

int gugudan() {
	int i, j;
	cout << "1~9�� ���" << endl;
	for (i = 1; i < 10; i++) {
		cout << "---- " << i << "�� ----" << endl;
		for (j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}

	return 0;
}