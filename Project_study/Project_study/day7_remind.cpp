#include <iostream>
using namespace std;

int day7_remind() {
	// ������ ����: �޸� �ּҸ� �����ϴ� ����
	//const(constant): ���
	//const ������
	int i = 100;
	// 1. �ּҸ� �ٲ� �� ������ �ϴ� ����
	int* const ptr = &i;
	// 2. �ּҰ� ����Ű�� �޸��� ���� �ٲ� �� ������ �ϴ� ����
	const int* ptr2 = &i;

	return 0;
}