#include <iostream>
using namespace std;

class Animal { // �߻� Ŭ����. ���������Լ��� �ϳ��� ���� -> �������̽�, �ڽĿ���� Ʋ�� ������
public:
	virtual void speak() = 0; // override�� ���� virtual ����. �����Լ�, abstract - �߻� �޽��
}; // = 0 -> ���������Լ�(�θ�� ������ ������ ������ �ȵǰ� �ڽ��� ��üȭ)

class Dog : public Animal {
public:
	void speak() override { //override�� �ϰڴٰ� ����. 
		cout << "�۸�" << endl;
	}

	void tailSwing() {
		cout << "����������" << endl;
	}
};

class Dinosaur : public Animal {
public:
	void speak() override {
		cout << "ũ��ũ��" << endl;
	}
};

int day14_class4() {
//int main() {
	Dog dog; // Dog���� speak ���� ���ϸ� ����
	dog.speak();

	Animal* animal = nullptr; // ���� ������
	Dinosaur dino; // ���� �ν��Ͻ� ����

	animal = &dino; // �ִϸ� �����Ϳ� dino��� ���� Ŭ������ �ν��Ͻ� ����
	animal->speak(); // dino�� speak�� ����� �� �ְ� ��.
	// ������ -> �޸� �ٶ󺸴� ���. �����ͷ� ������ �θ�κ��� ���� speak ����. �ٵ� �ڽ��� ���� speak ����
	// �����Ͱ� dino�� animal�� �����ϰ� �ٶ�. override�� �ϸ� �������̺��� ����� �ڽ� ��Ұ� ��.
	// speak�� �����Ҷ� �θ� virtual �� �ִٸ� �������̺��� ����Ų �ڽ��� speak �����

	animal = &dog;
	animal->speak();
	// animal->tailSwing(); // animal ������ dog�� tailSwing�� ������� ����. �ֳ��ϸ� Animal�� �������� ���¿���
	// tailSwing�� �������� ������ tailSwing�� �ٶ� ����� ����

	animal = nullptr;
	string choice;
	cout << "���� ����(��, ����): " << endl;
	cin >> choice;

	if (choice == "������") {
		animal = new Dog(); // �������� dog ���� ���� DOg ���� �Ҵ�
	}
	else {
		animal = new Dinosaur();
	}
	animal->speak();
	delete animal; // �� ����� �޸� Ǯ����

	return 0;
}