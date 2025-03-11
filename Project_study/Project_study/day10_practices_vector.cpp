#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int day10_practices_vector() {
	////�ǽ�1.vector �����ϱ�
	////1. Vector�� ����Ͽ� ������ �����ϴ� �� ���� ����
	//int i, input, input2;
	//vector<int> vec; // ���� �迭 ������ �������� vector ����
	////2. ����ڷκ��� 5���� ������ �Է¹޾� ���Ϳ� �߰�
	//for (i = 0; i < 5; i++) {
	//	cout << i << " ��° ������ 1�� �Է�: ";
	//	cin >> input;
	//	vec.push_back(input); // vec�� ���� input ����
	//}
	////3. ������ ũ�� ���
	//cout << "���� ������: " << vec.size() << endl;
	////4. ������ ��� ���� ���
	//for (int num : vec) {
	//	cout << num << " ";
	//}
	//cout << endl;
	////5. ���� ū ���� ã�� ���
	//// int maxVal = *max_element(vec.begin(), vec.end()); // �̷� ��ĵ� ����. iterator�� *�� �ٿ��� ���� �ҷ������� ��.
	//sort(vec.begin(), vec.end()); // �������� ����
	//cout << "���� ū ��: " << vec[4] << endl;
	////6. ������ ��� ���Ҹ� �ι��
	//for (int& num : vec) { // & = �迭�� �ش� ��ġ�� ���� ���� ���ڴ�.
	//	num *= 2; // �ش� �޸��� ���� �ι� ���ϱ�
	//}
	//for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
	//}
	//cout << endl;
	////7. �ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	//cout << "�����ϰ� ���� vector�� index �Է�: ";
	//cin >> input;
	//vec.erase(vec.begin() + input); // �ݺ��ڸ� �־��ְ� index�� �־ erase ���
	//for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
	//}
	//cout << endl;
	////8. �ε����� �Է¹޾� �ش� �ε����� �ִ� ���ο� ���� ����
	//cout << "�Է��ϰ� ���� vector�� index �Է�: ";
	//cin >> input;
	//cout << "�Է��ϰ� ���� int ���� �Է�: ";
	//cin >> input2;
	//vec.insert(vec.begin() + input, input2);
	//for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
	//}
	//cout << endl;

	//�ǽ�2. 2���� ��� �����
	//����ڰ� �Է��� ��(rows)�� ��(cols) ũ�⿡ �´� ���� 2���� �迭�� �����ϰ�,
	//�� ��Ҹ�(i + 1)* (j + 1) ������ �ʱ�ȭ�� ��, ����� �� �޸𸮸� �����ϴ� ���α׷��� �ۼ��ϼ���.
	//int row, col, i, j;
	//cout << "��, �� ���� �Է�: ";
	//cin >> row >> col;
	//cout << row << " " << col << endl;

	//vector<vector<int>> vec(row, vector<int>(col)); // ���� ����

	//for (i = 0; i < row; i++) {
	//	for (j = 0; j < col; j++) {
	//		vec[i][j] = (i + 1) * (j + 1);
	//	}
	//}
	//for (i = 0; i < row; i++) {
	//	for (j = 0; j < col; j++) {
	//		cout << vec[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//�ǽ�3. 2���� ��� �����
	//����ڰ� �Է��� ��(rows)�� ��(cols), ����� ���Ҹ� ���� �Է��ϵ��� �����ϰ�
	//�� ��� ���� ���� ���ϵ��� �����غ�����.

	int row, col, i, j, val, total;
	cout << "��, �� ���� �Է�: ";
	cin >> row >> col;
	vector<vector<int>> vec(row, vector<int>(col, 0)); // ���� ���� �� �ʱⰪ 0 ����
	
	cout << "��� ���Ҹ� �Է��ϼ���: " << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cin >> val; // �Է� j���� �ѹ��� �޴� ����
			vec[i][j] = val;
		}
	}
	cout << "��� ���� �Է� ��: " << endl;
	for (i = 0; i < row; i++) {
		for (int num : vec[i]) {
			cout << num << " ";
		}
		cout << endl;
	}

	cout << "�� ���� ��: " << endl;
	for (i = 0; i < row; i++) {
		cout << "��" << i+1 << ": ";
		total = 0;
		for (int num : vec[i]) {
			total += num;
		}
		cout << total << endl;
	}
	cout << "�� ���� ��: " << endl;
	for (j = 0; j < col; j++) {
		cout << "��" << j + 1 << ": ";
		total = 0;
		for (i = 0; i < row; i++) {
			total += vec[i][j];
		}
		cout << total << endl;
	}

	return 0;
}