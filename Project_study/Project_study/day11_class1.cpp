#include <iostream>
using namespace std;

class Car {
public: // public �־�� ���� ���� ����
	string brand; // �������, �ʵ�
	int speed = 0; 

//public:
	void drive() { // Ŭ������ ���� �Լ� = �޼ҵ�
		cout << brand << "��" << speed << "km/h�� �����մϴ�." << endl;
	}
};

class Person {
private: // private�� public ����. ���� ������ ����
	string name;
	int age;

public:
	Person(string name, int age) { // ������ �Լ�. Constructor. �ν��Ͻ� ��������� �Բ� �� �ڵ���� �����Ŵ
		this->name = name; // �⺻����
		this->age = age;
		this->showInfo();
	}

	Person(Person& other) { // ���������
		this->name = other.name; // ����������� �̸��� �ٸ����� ���� ����. �޸� ���� ���ϱ� ����
		this->age = other.age;
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

int day11_class1() {
	Car c1;
	Car c2;
	//c1.brand = "Benz"; // �̴�� ���� ������. Ŭ������ �⺻������ �����ڰ� private = ������ �����Ѵ�

	//c1.brand = "BMW";
	//c1.speed = 300;
	//c1.drive();

	Person p1("ȫ�浿", 20);

	return 0;
}