#include <iostream>
using namespace std;

////C��Ÿ��
//typedef struct Person{
//	string name;
//	string address;
//	int age;
//} myPerson // alias(��Ī)

//C++ ��Ÿ��
struct Person {
	string name;
	string address;
	int age;
	void Study(){
		cout << "Ž�������� �湮 ���Դϴ�" << endl;
	}
};
using PersonAlias = Person; // ����� ��Ī ����

struct Address {
	string city;
	string street;
};

struct Person2 { // struct ����ü ���� ����ü
	string name;
	Address address;
	int age;
};

int struct_study() {
	Person pl; // ����ü ���� �� ���� ������ �� / �ʱ�ȭ ���� �� �ִ�
	pl.name = "ȫ�浿";
	pl.address = "���¿�";
	pl.age = 15;

	Person pl2 = { "�Ӳ���", "â��", 20 }; // �� �����ϰ� �ʱ�ȭ

	cout << "P1" << endl;
	cout << "�̸�: " << pl.name << endl;
	cout << "�ּ�: " << pl.address << endl;
	cout << "����: " << pl.age << endl;
	pl.Study();

	cout << "P2" << endl;
	cout << "�̸�: " << pl2.name << endl;
	cout << "�ּ�: " << pl2.address << endl;
	cout << "����: " << pl2.age << endl;

	Person2 p3 = { "��Ȳ", {"�巹������", "��?��"}, 24 };
	cout << "�̸�: " << p3.name << endl;
	cout << "�ּ�: " << p3.address.city << endl;
	cout << "�Ÿ�: " << p3.address.street << endl;
	cout << "����: " << p3.age << endl;

	Person* ptr = &pl; // struct�� ���� ������
	cout << (*ptr).name << endl; // �̷� ���·� ������ ����
	cout << ptr->address << endl; // �̷��� �θ��� �͵� ������

	return 0;
}