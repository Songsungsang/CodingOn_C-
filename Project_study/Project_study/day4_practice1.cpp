//�ǽ�1. �Է��� ���ڸ�ŭ �� ���
//����� ����
//input : 5
//output :
//	*
//	**
//	***
//	****
//	*****

#include <iostream>
using namespace std;

int print_stars() {
	int i, j, input, blank;
	cout << "����� ����" << endl;
	cout << "input : ";
	cin >> input;
	cout << "output: " << endl;
	//for (i = 0; i < input; i++) {
	//	for (j = 0; j <= i; j++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	for(i = 1; i < input + 1; i++) { // �� �Ųٷ� ���
		blank = input - i;
		for(j = 0; j <= input; j++) {
			if (j <= blank) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	

	return 0;
}