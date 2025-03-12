#include <iostream>
using namespace std;

////C스타일
//typedef struct Person{
//	string name;
//	string address;
//	int age;
//} myPerson // alias(별칭)

//C++ 스타일
struct Person {
	string name;
	string address;
	int age;
	void Study(){
		cout << "탐관오리를 방문 중입니다" << endl;
	}
};
using PersonAlias = Person; // 명시적 별칭 지정

struct Address {
	string city;
	string street;
};

struct Person2 { // struct 구조체 안의 구조체
	string name;
	Address address;
	int age;
};

int struct_study() {
	Person pl; // 구조체 정의 후 값을 정해줄 수 / 초기화 해줄 수 있다
	pl.name = "홍길동";
	pl.address = "이태원";
	pl.age = 15;

	Person pl2 = { "임꺽정", "창동", 20 }; // 더 간단하게 초기화

	cout << "P1" << endl;
	cout << "이름: " << pl.name << endl;
	cout << "주소: " << pl.address << endl;
	cout << "나이: " << pl.age << endl;
	pl.Study();

	cout << "P2" << endl;
	cout << "이름: " << pl2.name << endl;
	cout << "주소: " << pl2.address << endl;
	cout << "나이: " << pl2.age << endl;

	Person2 p3 = { "도황", {"드레스로쟈", "몰?루"}, 24 };
	cout << "이름: " << p3.name << endl;
	cout << "주소: " << p3.address.city << endl;
	cout << "거리: " << p3.address.street << endl;
	cout << "나이: " << p3.age << endl;

	Person* ptr = &pl; // struct에 대한 포인터
	cout << (*ptr).name << endl; // 이런 형태로 역참조 가능
	cout << ptr->address << endl; // 이렇게 부르는 것도 가능함

	return 0;
}