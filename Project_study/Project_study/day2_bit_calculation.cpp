#include <iostream>
#include <bitset>
using namespace std;

int bit_calculation() {
	// & (and) ��Ʈ ���꿡���� & �Ѱ��� ���
	//int a = 0b0101; // 5
	//int b = 0b1001; // 9
	//cout << bitset<4>(a & b) << endl; // ����Ǵ� ��Ʈ�� ������ 1�� �ҷ���
	
	//cout << bitset<4>(a | b) << endl // �ϳ��� 1�̸� 1 ����


	// ^ (xor) ��Ʈ�� ������ 0 �ٸ��� 1
	//int c = 0b1010;
	//int d = 0b1001;
	//cout << bitset<4>(c ^ d) << endl;

	//����Ʈ
	//int e = 0b0001;
	//cout << bitset<4>(e << 2) << endl;

	//e = 0b0011;
	//cout << bitset<4>(e >> 1); // 1��Ʈ 1���� ���ư�

	//Ư�� ��Ʈ�� �߰��� ����
	int f = 0b1000;
	//��Ʈ�߰�
	cout << bitset<4>(f |= (1 << 1)) << endl; // or ���
	//��Ʈ �߰��� ����
	cout << bitset<4>(f) << endl;
	//��Ʈ����
	cout << bitset<4>(f & ~(1 << 1)) << endl; // and�� not�� ���� ���


	return 0;
}