#include <iostream>
using namespace std;

void coutFunc(void (*callback)()) {
	cout << "���" << endl;
	callback(); // �Լ� �θ���
}

int addFunc(int a, int b) {
	return a + b;
}

void myCallback() {
	cout << "��� �ݹ��̿���" << endl;
}

int day8_pointer2() {
	int i = 0;
	char c = 'a';
	short s = 10;
	double d = 3.14;

	void* ptr = nullptr;
	ptr = &i;
	ptr = &c;
	ptr = &s;
	ptr = &d;
	//*ptr; // void pointer�� ������ �Ϸ��� �ϴϱ� ������ ��.
	// Ÿ���� ������ ���� ���� = �д� ũ��� �ڷ����� �������� ����.
	double* tmp = (double*)ptr; // ������ type casting�ϰ� ���� ��� ��������
	cout << *tmp << endl;

	//int i = new int; // �Ϲ����� �������� ������ compile�Ǵ� ������ �̹� �޸𸮰� ������
	// = ������ �޸� ���� �Ҵ� �Ұ���
	// �Ʒ��� ���� ���� �Ҵ�
	int* iPtr = new int(10);
	cout << *iPtr << endl;
	// �޸� ����
	delete iPtr;

	//int size;
	//cout << "������ �Է�: ";
	//cin >> size; // �迭�� ũ�⸦ �Է¹޾� �������� �Ҵ��ϰ� ����
	////int iArr[idx] = {}; // int iArr[idx] ���� �����δ� �迭 ������. ��? idx ���� compile�Ҷ� �𸣴ϱ�.
	//int* iArr = new int[size]; // �������� ���ؾ� �ϴ� �迭 �޸𸮸� ���� ����.
	//// �� ���θ��� �޸𸮴� �޸𸮰� �ƴ϶� heap�����̰� ���� �����δ� �޸� ������ ������ ���

	//for (int i = 0; i < size; i++) {
	//	iArr[i] = (i + 1) * 10;
	//}

	//for (int i = 0; i < size; i++) {
	//	cout << "���: " << iArr[i] << endl;
	//}

	//delete[] iArr; // �����ҋ� �迭�� ���������ϱ� delete���� [] ����� �޸� ����

	//int a = 100;
	//int* dptr = &a;
	//int** ddPtr = &dptr;

	//cout << "������: " << *dptr << endl;
	//cout << "����������: " << **ddPtr << endl;
	// ���� �����ͷ� �迭 �����
	int row = 3;
	int col = 3;

	int** matrix = new int*[row]; // row�� ����. ���� �����ͷ� �����͸� ����

	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col]; // �迭�� ������ ���ҷ� ���ο� �迭�� �����
	}

	for(i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = i + j; // �迭�� ������ �迭�� ���� �Ҵ�. 2���� �迭 ����
		}
	}

	for (i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// delete - ���� ������ �迭 �ȿ� �����͸� ���� ����.
	// �׷� ������ ���ʺ���? �ٱ��ʺ���? ���ʺ���
	for (i = 0; i < row; i++) {
		delete[] matrix[i]; // ���� �ȵ� �迭�̴ϱ� ���ŵ�
	}
	delete[] matrix; // �ٱ��� ��ü�� �迭 ������

	//�Լ� ������
	//void (*funcPtr)() = nullptr;
	//funcPtr = coutFunc; // coutFunc �Լ� �̸� ��ü�� �ּҸ� ������ ����
	//funcPtr(); // �Լ��� �����

	//int(*funcPtr2)(int, int) = nullptr; // �Ű����� �ڷ��� int�� int
	//funcPtr2 = addFunc;
	//cout << funcPtr2(10, 20) << endl;

	coutFunc(myCallback);

	return 0;
}