#include <iostream>
using namespace std;

class Parent {
public:
	string familyName = "김씨";

	Parent() {
		cout << "Parent 클래스 생성" << endl;
	}

	~Parent() {
		cout << "부모 클래스 종료" << endl;
	}
};

class Child : public Parent { // 접근지정자 public 설정. 안해도 된다?
public:
	Child() {
		cout << "자식 클래스 생성 " << endl;
	}

	void showFamilyName() {
		cout << "우리의 성은: " << familyName << endl;
	}

	~Child() {
		cout << "자식 클래스 종료" << endl;
	}

};

class threeTypes {
private:
	string privateValue = "프라이빗";
protected:
	string protectedValue = "프로텍티드";
public:
	string publicValue = "퍼블릭";
};

class typeChild : public threeTypes { // 상속받을때 protected를 쓰면 public도 접근조건이 protected로 바뀜
public:
	void showValues() {
		cout << "public: " << publicValue << endl;
		cout << "protected: " << protectedValue << endl;
		//cout << "private: " << privateValue << endl; // private 접근 못함
	}
};

class CalcParent {
public:
	int add(int a, int b) {
		cout << "두개 더하기: ";
		return a + b;
	}
};

class CalcChild : public CalcParent {
public:
	void add(int a, int b, int c) {
		cout << "세개 더하기: " << a + b + c;
	}
};

class Weight {
public:
	int kg;

	Weight(int kg) {
		this->kg = kg;
	}

	Weight* operator+(Weight& other) { // operator+를 사용하여 + 연산에 대한 처리도 가능하도록 함
		this->kg += other.kg;
		return this; // 포인터로 값을 복사가 아닌 메모리에 저장된 값을 직접 바꿀 수 있도록 해줌
	}

	void showWeight() {
		cout << "몸무게는 " << kg << "입니다" << endl;
	}
};

class overrideParent {
public:
	void Show() {
		cout << "부모 클래스입니다" << endl; // 실제 overriding 에서는 부모 함수는 추상적으로만 있고 구체적인 구현이 있으면 안됨
	}
};

class overrideChild : overrideParent {
public:
	void Show() { // overriding. 사실 엄밀히 따지면 정확히 오버라이딩은 아니고 부모 함수를 숨기고/없애고 자식 함수를 실행함
		cout << "자식 클래스입니다" << endl; // 뭘 구현할지는 자식단계에서
	}
};

//int day13_class3() {
int main(){
	//Child kim;
	//kim.showFamilyName();

	//typeChild threeval;
	//threeval.publicValue;
	////threeval.protectedValue; // 외부에서 protected와 private 접근 안됨
	////threeval.privateValue;

	//CalcChild calculate;
	//calculate.add(5, 10, 15);

	//Weight w1(100), w2(150);
	//(w1 + w2)->showWeight();
	//w1 + w2;
	//cout << w1.kg << endl;
	overrideParent p;
	overrideChild c;

	p.Show();
	c.Show();

	return 0;
}