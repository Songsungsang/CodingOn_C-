#include <iostream>
using namespace std;

int day8_practices() {
	//�ǽ�1.���� 2 ���� �迭 ���� �� ����
	//����ڰ� �Է��� ��(�� ��(cols) ũ�⿡ �´� ���� 2 ���� �迭�� �����ϰ�
	//�� ��Ҹ�(i + 1) * (j + 1) ������ �ʱ�ȭ�� ��, ����� �� �޸𸮸� �����ϴ� ���α׷��� �ۼ��ϼ���

	int row, col, i, j;
	cout << "�� �Է�: ";
	cin >> row;
	cout << "�� �Է�: ";
	cin >> col;

	int** matrix = new int*[row]; // ���� ����Ʈ�� ������ �迭 ���� ���� ���

	for (i = 0; i < row; i++) {
		matrix[i] = new int[col]; // �� ������ �迭 ��Ҹ��� ���ο� �迭 ����
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			matrix[i][j] = (i + 1) * (j + 1); // �� �������� �� ����
		}
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < row; i++) {
		delete[] matrix[i]; // �迭 �޸� ���� ����
	}
	delete[] matrix; // ������ �迭 ����

	return 0;
}