#include <iostream>
using namespace std;

class Counter { // static int를 가진 클래스
private:
	static int count;
public:
	Counter() {
		count++;
	}

	static int getCount() {
		return count;
	}
};

int Counter::count = 0; // 초기화 방법 - 외부에서 초기화

class Parent { // 상속을 위한 상위 클래스
public:
	string familyName;
	string address;
	string asset;

	Parent(string fn) {
		cout << "부모 클래스 실행" << endl;
		familyName = fn;
	}

	~Parent() {
		cout << "부모 클래스 종료" << endl;
	}
};

class Child : public Parent { // 부모로부터 요소들 상속받기
public:
	Child(string fn) : Parent(fn) { // 자녀클래스 생성자를 만들지만 부모 클래스의 생성자도 실행됨
		cout << "자녀 클래스 실행" << endl;
	}

	~Child() { // 자식이 종료되고 부모가 종료됨
		cout << "자녀 클래스 종료" << endl;
	}

	void showFamilyName() {
		cout << "우리의 성은 " << this->familyName << endl;
	}
};

int day12_class2() {
	//Counter c1, c2, c3;

	//cout << "객체 수: " << Counter::getCount() << endl;

	Child children("김");
	children.showFamilyName();

	return 0;
}