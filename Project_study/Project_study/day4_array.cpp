#include <iostream>
#include <bitset>
using namespace std;

int array_study() {
	int numbers[5] = {10, 20, 30, 40, 50};
	int i, j;
	//indexing - �迭�� �̸��� ���� �ش� ��ȣ�� �Ἥ �ش��ϴ� ��ȣ�� �ڷḦ �ҷ���
	for (i = 0; i < 5; i++) {
		cout << numbers[i] << endl;
	}

	string words[2][2] = { {"��", "��"}, {"��", "��"} };
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << words[i][j];
		}
		cout << endl;
	}

	for (int num : numbers) { // for - each ������ for��
		cout << num << endl;
	}


	return 0;
}