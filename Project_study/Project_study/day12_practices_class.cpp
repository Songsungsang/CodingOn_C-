//#include <iostream>
//using namespace std;
//
////class Rectangle {
////private:
////	int	width;
////	int height;
////
////public:
////	Rectangle(int width, int height) {
////		this->width = width;
////		this->height = height;
////	}
////
////	int getArea() {
////		return this->width * this->height;
////	}
////
////	Rectangle* compareArea(Rectangle& other) { // ���⼭�� & = �޸𸮿� �����ؼ� ���� �����´�
////		int thisArea = this->getArea();
////		int otherArea = other.getArea();
////
////		if (otherArea > thisArea) return &other;  // �簢����2�� ���̰� �� ũ��. &�ٿ��� �ּ� �޾ƿ���
////		return this; // Rectangle*�� ����Ÿ���̱� ������ �ڱ� �ڽ��� ����Ű�� ������ this�� ��ȯ
////	}
////
////	void showInfo() {
////		cout << "�簢���� ����: " << getArea() << endl;
////	}
////};
////
////class User {
////private:
////	static int nextID;
////	int ID;
////	string name;
////
////public:
////	User(string name) {
////		nextID++;
////		this->ID = nextID;
////		this->name = name;
////	}
////
////	void showInfo() {
////		cout << "����� ����| [ID] : " << this->ID << " [�̸�] : " << this->name << endl;
////	}
////
////	static int getTotalUsers() {
////		return nextID;
////	}
////};
////
////int User::nextID = 0;
//
//int day12_practices_class() {
//	//�ǽ�1. �� ��ü �� �� ��ȯ
//	//1. Rectangle Ŭ������ �����.
//	//2. width(����)�� height(����)�� ��� ������ �����Ѵ�.
//	//3. getArea() ��� �Լ��� �ۼ��Ͽ� ���̸� ��ȯ�Ѵ�.
//	//4. compareArea(Rectangle& other) ��� �Լ��� �߰��Ͽ� ���� ��ü�� �ٸ� ��ü�� ���̸� ��
//	//5. �� ���� ��ü�� ��ȯ�ϵ��� �Ѵ�.
//	//6. this �����͸� Ȱ���Ͽ� this->getArea() vsother.getArea() �� �� �� ū ��ü ��ȯ
//	//7. main()���� �� ���� Rectangle ��ü�� �����ϰ�, ���̰� �� ū ��ü�� ������ ���
//	//Rectangle rect1(10, 20);
//	//Rectangle rect2(30, 40);
//
//	//Rectangle* bigRect = rect1.compareArea(rect2); // return ���� Rectangle* �̹Ƿ� this �޾ƿ���
//
//	//cout << "ū �簢��" << endl;
//	//bigRect->showInfo(); // pointer�ϱ� . �� �ƴ϶� ->���� �޽�� chain
//
//	//�ǽ�2.������ ID �Ҵ�
//	//User u1("����");
//	//User u2("�̸���");
//	//User u3("�ϼ���");
//	//User u4("�̻�");
//
//	//
//	//cout << "����� ���� ������: " << endl;
//	//u1.showInfo();
//	//u2.showInfo();
//	//u3.showInfo();
//	//u4.showInfo();
//
//	//cout << "�� ����� ��: " << User::getTotalUsers() << endl;
//
//	return 0;
//}