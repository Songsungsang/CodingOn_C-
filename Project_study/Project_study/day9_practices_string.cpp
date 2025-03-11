#include <iostream>
#include <string>
using namespace std;

bool isNumber(string str);

int main() {
	// 실습1. string 사용해보기
	//1.s 문자열의 길이 출력
	//2.100번째 문자 출력(index는 0부터 시작)
	//3.“two” 라는 문자가 처음 나오는 index 출력
	//4.“two” 라는 문자가 두번째 나오는 index 출력
	//string s = "Police say two people are suspected of trying to create a shortcut for their construction work.Thetwo have been detained and the case is under further investigation.The38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

	//cout << "1번: " << s.size() << endl;
	//cout << "2번: " << s.at(99) << endl;
	//cout << "3번: " << s.find("two") << endl;
	//cout << "4번: " << s.find("two", s.find("two") + 1) << endl;

	////실습2.string 사용해보기
	//string s1, s2;
	//bool isNumber = false;
	//bool t1 = true, t2 = true;
	//while (isNumber == false) {
	//	//1.두 문자열을 입력 받아서 둘 모두 숫자인지 검사, 아니면 다시 입력 받기
	//	//•“1111”->OK
	//	//•“abcd”, “a123”, “123a” →NO
	//	cout << "두 숫자를 입력하세요: ";
	//	cin >> s1 >> s2;
	//	for (char c1 : s1) { // s1의 각 문자에 대한 for loop
	//		t1 = isdigit(c1); // 각 문자에 대한 숫자 확인
	//		if (t1 == false) break; // 숫자가 아니면 t1은 false 유지
	//	}
	//	for (char c2 : s2) {
	//		t2 = isdigit(c2);
	//		if (t2 == false) break;
	//	}
	//	if (t1 == true && t2 == true) isNumber = true;
	//}
	////2.앞에서 입력 받은 두 숫자를 이어 붙여서 출력
	////•“1111” “2222” →“11112222”
	//cout << s1 + s2 << endl;
	////3.앞에서 입력 받은 두 숫자의 합을 출력
	////•“1111” “2222” →3333
	//cout << stoi(s1) + stoi(s2) << endl;

	////실습2번 다른 예시
	//string str1, str2;

	//while (true) {
	//	// 문자열 두개를 입력받아서
	//	cout << "첫 번째 숫자를 입력해주세요: ";
	//	cin >> str1;
	//	cout << "두 번째 숫자를 입력해주세요: ";
	//	cin >> str2;

	//	// 둘다 숫자인지 체크하고
	//	if (isNumber(str1) && isNumber(str2)) {
	//		break;
	//	}

	//	// 하나라도 숫자가 아니면, 다시 입력을 받는다(반복)
	//	cout << "숫자만 입력해주세요!!!" << endl;
	//}

	//cout << "문자열 이어붙이기: " << str1 + str2 << endl;
	//cout << "두숫자의 합: " << stoi(str1) + stoi(str2) << endl;

	//실습3.string 사용해보기
	//1.string s = “Codingon”
	//2.첫번째 문자 소문자로 변경 →“codingon”
	//3.“ding” 이라는 부분문자열 반환
	//4.“coooooon” 이 되도록 변경
	//5.“con” 이 되도록 변경

	string s = "Codingon";
	cout << s << endl;

	s.front() = tolower(s.front()); // s의 첫번째를 소문자로 바꾼걸 넣는걸. 값을 넣는걸 반드시 잊지 말도록
	cout << s << endl;

	cout << s.substr(2, 4) << endl;
	cout << s.replace(2, 4, "oooo") << endl;
	cout << s.erase(2, 5) << endl;

	return 0;
}

bool isNumber(string str) {
	for (char c : str) {
		if (!isdigit(c)) return false;
	}
	return true;
}