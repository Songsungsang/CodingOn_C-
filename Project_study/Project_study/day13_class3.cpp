#include <iostream>
using namespace std;

class Parent {
public:
	string familyName = "�达";

	Parent() {
		cout << "Parent Ŭ���� ����" << endl;
	}

	~Parent() {
		cout << "�θ� Ŭ���� ����" << endl;
	}
};

class Child : public Parent { // ���������� public ����. ���ص� �ȴ�?
public:
	Child() {
		cout << "�ڽ� Ŭ���� ���� " << endl;
	}

	void showFamilyName() {
		cout << "�츮�� ����: " << familyName << endl;
	}

	~Child() {
		cout << "�ڽ� Ŭ���� ����" << endl;
	}

};

class threeTypes {
private:
	string privateValue = "�����̺�";
protected:
	string protectedValue = "������Ƽ��";
public:
	string publicValue = "�ۺ�";
};

class typeChild : public threeTypes { // ��ӹ����� protected�� ���� public�� ���������� protected�� �ٲ�
public:
	void showValues() {
		cout << "public: " << publicValue << endl;
		cout << "protected: " << protectedValue << endl;
		//cout << "private: " << privateValue << endl; // private ���� ����
	}
};

class CalcParent {
public:
	int add(int a, int b) {
		cout << "�ΰ� ���ϱ�: ";
		return a + b;
	}
};

class CalcChild : public CalcParent {
public:
	void add(int a, int b, int c) {
		cout << "���� ���ϱ�: " << a + b + c;
	}
};

class Weight {
public:
	int kg;

	Weight(int kg) {
		this->kg = kg;
	}

	Weight* operator+(Weight& other) { // operator+�� ����Ͽ� + ���꿡 ���� ó���� �����ϵ��� ��
		this->kg += other.kg;
		return this; // �����ͷ� ���� ���簡 �ƴ� �޸𸮿� ����� ���� ���� �ٲ� �� �ֵ��� ����
	}

	void showWeight() {
		cout << "�����Դ� " << kg << "�Դϴ�" << endl;
	}
};

class overrideParent {
public:
	void Show() {
		cout << "�θ� Ŭ�����Դϴ�" << endl; // ���� overriding ������ �θ� �Լ��� �߻������θ� �ְ� ��ü���� ������ ������ �ȵ�
	}
};

class overrideChild : overrideParent {
public:
	void Show() { // overriding. ��� ������ ������ ��Ȯ�� �������̵��� �ƴϰ� �θ� �Լ��� �����/���ְ� �ڽ� �Լ��� ������
		cout << "�ڽ� Ŭ�����Դϴ�" << endl; // �� ���������� �ڽĴܰ迡��
	}
};

//int day13_class3() {
int main(){
	//Child kim;
	//kim.showFamilyName();

	//typeChild threeval;
	//threeval.publicValue;
	////threeval.protectedValue; // �ܺο��� protected�� private ���� �ȵ�
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