#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() { // ������ �Լ�. Constructor. �ν��Ͻ� ��������� �Բ� �� �ڵ���� �����Ŵ
		name = "�Ӳ���"; // �⺻����
		age = 100;
	}

	void setName(string name) {
		this->name = name; // this-> �� Ŭ������ ������� ���� ��������
	}

	void setAge(int x) {
		age = x;
	}

	void showInfo() {
		cout << "�ش� �ι��� �̸�: " << name << endl;
		cout << "����: " << age << endl;
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
		cout << amount << " �Ա�, ���� ���� �ܾ�: " << this->balance << endl;
	}

	void withdraw(int amount) {
		if (amount > this->balance) {
			cout << "��� �ݾ��� �ܾ׺��� Ů�ϴ�." << endl;
		}
		else {
			this->balance -= amount;
			cout << amount << " ���, ���� ���� �ܾ�: " << this->balance << endl;
		}
	}

	~BankAccount() {
		cout << "���� ������: [" << this->accountNumber << "]" << endl;
	}
};

//int day11_practices_class() {
int day11_practices_class(){
	//�ǽ�1.Ŭ���� ����غ���(1) - ���
	//1. name(�̸�)�� age(����)�� ��� ������ ������ Person Ŭ������ �ۼ�
	//2. setName()�� setAge() ��� �Լ��� �߰��Ͽ� ���� ������ �� �ֵ��� �����
	//3. showInfo() ��� �Լ��� ����� �̸��� ���̸� ����ϵ��� �����
	//Person p1;
	//p1.showInfo();
	//p1.setName("ȫ�浿");
	//p1.setAge(20);
	//p1.showInfo();

	//�ǽ�3. Ŭ���� ����غ���(3) -����
	//1. accountNumber(���¹�ȣ), balance(�ܾ�)�� ��� ������ ������ BankAccountŬ���� �ۼ�
	//2. �����ڿ��� ���¹�ȣ�� �ʱ� �ܾ��� ����
	//3. deposit(int amount) ����, withdraw(int amount) ��� ��� �Լ� �߰�
	//4. �Ҹ��ڿ��� "���� ������: [���¹�ȣ]" ���
	BankAccount hong("469114", 40000);
	hong.deposit(4000);
	hong.withdraw(5000);
//	hong.~BankAccount(); // �������� ���� ����� �ڵ� ����

	return 0;
}