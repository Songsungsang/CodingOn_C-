#include <iostream>
using namespace std;

int day2_2() {
	int a = 10;
	a = a + 5;
	a += 5;

	//����������
	//���� �Ѵܰ� �����ϰų� ����
	int b = 0;
	b++; // ��ġ(��). ��� ���ؿ�
	++b; // ��ġ(��). ���ϰ� ��ƿ�
	cout << b;

	return 0;
}