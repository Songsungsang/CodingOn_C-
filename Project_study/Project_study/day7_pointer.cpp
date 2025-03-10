#include <iostream>
using namespace std;

void coutFunc(const int* x) { // �ٲ� �� ���� const ������ ��
	cout << "���: " << *x << endl; // * = �������� �ϰڴ� = �޸𸮿� ��� ���� ���ڴ�
}

int day7_pointer() {
	int i = 0; // 4����Ʈ. ���������� ��
	float f = 3.14f; // 4����Ʈ. �Ǽ������� ��. �ε��Ҽ��� �ٶ�.
	short s = 100; // 2����Ʈ

	int* iPtr = &i; // &i = i�� �޸� �ּ�. ����.
	short* sPtr = &s;

	cout << iPtr << endl; // ptr�� ����ϸ� i�� �޸� �ּҰ� ����
	cout << sPtr << endl;

	cout << "�޸� �ּҿ� ����� ��: " << *iPtr << endl; // i�� ���� ����. ������.
	cout << "�޸� �ּҿ� ����� ��: " << *sPtr << endl; // i�� ���� ����. ������.

	cout << "iPtr�� 1 ���ϱ�" << endl;
	cout << iPtr << endl;
	cout << iPtr+1 << endl; // 1��ŭ �ּҸ� ���� = �� ���(4����Ʈ) ���ϱ� ����ó��

	int iArr[4] = {10, 20, 30, 40}; // 16 ����Ʈ ������. int 1���� 4����Ʈ�ϱ�

	cout << "�迭�� �̸���? �迭�� �ּ� �Ǿ��� �ּ�" << endl;
	cout << *iArr << endl;
	cout << iArr + 1 << endl; // �ڷ����� ũ�⸸ŭ 1 ���ϱ�
	cout << *iArr + 1 << endl; // �ڷ����� ũ�⸸ŭ 1 ���ϱ�
	cout << *(iArr + 0) << endl; // iArr[0] ���� ����. �������� �迭�� ����
	cout << *(iArr + 1) << endl; // 
	cout << *(iArr + 2) << endl; // 
	cout << *(iArr + 3) << endl; // 

	int num = 5;
	int *ptr = &num;

	*ptr = 20;
	cout << "�����ͷ� ���� �ٲ� num" << endl;
	cout << num << endl;

	int a = 100;
	coutFunc(&a); // �ּҸ� �����ؼ� �ּҷ� ���� ����

	return 0;
}