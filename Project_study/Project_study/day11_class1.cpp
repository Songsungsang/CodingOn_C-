#include <iostream>
using namespace std;

class Car {
public: // public 있어야 변수 참조 가능
	string brand; // 멤버변수, 필드
	int speed = 0; 

//public:
	void drive() { // 클래스에 딸린 함수 = 메소드
		cout << brand << "가" << speed << "km/h로 주행합니다." << endl;
	}
};

class Person {
private: // private과 public 구분. 보안 목적이 강함
	string name;
	int age;

public:
	Person(string name, int age) { // 생성자 함수. Constructor. 인스턴스 만들어짐과 함께 이 코드들을 실행시킴
		this->name = name; // 기본값들
		this->age = age;
		this->showInfo();
	}

	Person(Person& other) { // 복사생성자
		this->name = other.name; // 복사생성자의 이름을 다른곳에 새로 만듦. 메모리 공유 안하기 위함
		this->age = other.age;
	}

	void setName(string name) {
		this->name = name; // this-> 이 클래스의 변수라는 것을 지정해줌
	}

	void setAge(int x) {
		age = x;
	}

	void showInfo() {
		cout << "해당 인물의 이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

int day11_class1() {
	Car c1;
	Car c2;
	//c1.brand = "Benz"; // 이대로 쓰면 에러남. 클래스는 기본적으로 접근자가 private = 접근을 제한한다

	//c1.brand = "BMW";
	//c1.speed = 300;
	//c1.drive();

	Person p1("홍길동", 20);

	return 0;
}