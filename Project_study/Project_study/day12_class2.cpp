#include <iostream>
using namespace std;

class Counter { // static int�� ���� Ŭ����
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

int Counter::count = 0; // �ʱ�ȭ ��� - �ܺο��� �ʱ�ȭ

class Parent { // ����� ���� ���� Ŭ����
public:
	string familyName;
	string address;
	string asset;

	Parent(string fn) {
		cout << "�θ� Ŭ���� ����" << endl;
		familyName = fn;
	}

	~Parent() {
		cout << "�θ� Ŭ���� ����" << endl;
	}
};

class Child : public Parent { // �θ�κ��� ��ҵ� ��ӹޱ�
public:
	Child(string fn) : Parent(fn) { // �ڳ�Ŭ���� �����ڸ� �������� �θ� Ŭ������ �����ڵ� �����
		cout << "�ڳ� Ŭ���� ����" << endl;
	}

	~Child() { // �ڽ��� ����ǰ� �θ� �����
		cout << "�ڳ� Ŭ���� ����" << endl;
	}

	void showFamilyName() {
		cout << "�츮�� ���� " << this->familyName << endl;
	}
};

int day12_class2() {
	//Counter c1, c2, c3;

	//cout << "��ü ��: " << Counter::getCount() << endl;

	Child children("��");
	children.showFamilyName();

	return 0;
}