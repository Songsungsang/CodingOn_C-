#include <iostream>
#include <string>
using namespace std;

int day9_string() {
	string s1 = "Hello"; // 문자열
	string s3(5, '!'); // 5개로 복사
	cout << s1 << s3 << endl;

	//string s4, s5;
	//cout << "Hello World 라고 쳐보세요: ";
	//cin >> s4 >> s5;
	//cout << s4 << s5 << endl;

	//string s6;
	//cout << "다시 입력해보세요: ";
	//getline(cin, s6);
	//cout << s6 << endl;

	string s7 = "codingon";

	cout << s7[7] << endl;
	cout << s7.front() << endl;
	cout << s7.back() << endl;
	cout << s7.size() << endl;
	cout << s7.find("g") << endl; // 답: 5 -> 0까지부터해서 5번 index에 있다.

	string s8 = "impossible";
	cout << s8.substr(2) << endl;

	int i = 1004;
	string s9 = to_string(i); // 형변환
	cout << s9 << endl;

	string s10 = "impossible";
	for (char &c: s10) c = toupper(c);
	cout << s10 << endl;

	return 0;
}