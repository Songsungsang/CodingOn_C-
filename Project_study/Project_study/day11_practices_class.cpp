#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() { // 생성자 함수. Constructor. 인스턴스 만들어짐과 함께 이 코드들을 실행시킴
		name = "임꺽정"; // 기본값들
		age = 100;
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

class BankAccount {
private:
	string accountNumber;
	int balance;

public:
	BankAccount(string accountNumber, int balance) {
		this->accountNumber = accountNumber;
		this->balance = balance;
	}
	void deposit(int amount) {
		this->balance += amount;
		cout << amount << " 입금, 현재 계좌 잔액: " << this->balance << endl;
	}

	void withdraw(int amount) {
		if (amount > this->balance) {
			cout << "출급 금액이 잔액보다 큽니다." << endl;
		}
		else {
			this->balance -= amount;
			cout << amount << " 출금, 현재 계좌 잔액: " << this->balance << endl;
		}
	}

	~BankAccount() {
		cout << "계좌 삭제됨: [" << this->accountNumber << "]" << endl;
	}
};

//int day11_practices_class() {
int day11_practices_class(){
	//실습1.클래스 사용해보기(1) - 사람
	//1. name(이름)과 age(나이)를 멤버 변수로 가지는 Person 클래스를 작성
	//2. setName()과 setAge() 멤버 함수를 추가하여 값을 설정할 수 있도록 만들기
	//3. showInfo() 멤버 함수를 만들어 이름과 나이를 출력하도록 만들기
	//Person p1;
	//p1.showInfo();
	//p1.setName("홍길동");
	//p1.setAge(20);
	//p1.showInfo();

	//실습3. 클래스 사용해보기(3) -계좌
	//1. accountNumber(계좌번호), balance(잔액)를 멤버 변수로 가지는 BankAccount클래스 작성
	//2. 생성자에서 계좌번호와 초기 잔액을 설정
	//3. deposit(int amount) 예금, withdraw(int amount) 출금 멤버 함수 추가
	//4. 소멸자에서 "계좌 삭제됨: [계좌번호]" 출력
	BankAccount hong("469114", 40000);
	hong.deposit(4000);
	hong.withdraw(5000);
//	hong.~BankAccount(); // 마지막에 실행 종료시 자동 실행

	return 0;
}