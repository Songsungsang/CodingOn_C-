#include <iostream>
#include <string>
using namespace std;

int day9_string() {
	string s1 = "Hello"; // ���ڿ�
	string s3(5, '!'); // 5���� ����
	cout << s1 << s3 << endl;

	//string s4, s5;
	//cout << "Hello World ��� �ĺ�����: ";
	//cin >> s4 >> s5;
	//cout << s4 << s5 << endl;

	//string s6;
	//cout << "�ٽ� �Է��غ�����: ";
	//getline(cin, s6);
	//cout << s6 << endl;

	string s7 = "codingon";

	cout << s7[7] << endl;
	cout << s7.front() << endl;
	cout << s7.back() << endl;
	cout << s7.size() << endl;
	cout << s7.find("g") << endl; // ��: 5 -> 0���������ؼ� 5�� index�� �ִ�.

	string s8 = "impossible";
	cout << s8.substr(2) << endl;

	int i = 1004;
	string s9 = to_string(i); // ����ȯ
	cout << s9 << endl;

	string s10 = "impossible";
	for (char &c: s10) c = toupper(c);
	cout << s10 << endl;

	return 0;
}