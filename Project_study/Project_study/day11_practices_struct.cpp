#include <iostream>
using namespace std;

struct Rectangle {
	int width;
	int height;
	int getArea() {
		return width * height;
	}
};

struct Point {
	int x;
	int y;
	void add(const Point &other) { // point struct�� ���� �����Ϸ��� ��. & ��� �ڵ�� ���ư����� �޸� ������ �� ���� 
		int xAdd = x + other.x;
		int yAdd = y + other.y;
		cout << "x�� ��: " << xAdd << endl;
		cout << "y�� ��: " << yAdd << endl;
	}
};

int day11_practices_struct() {
	//�ǽ�1.����ü ����غ���
	//1. Rectangle ����ü �����
	//2. �簢���� ���� ���� ���̸� �����ϴ� ����ü
	//3. ���� width, height
	//4. ����ü�� �̿��Ͽ� ������ �����ϰ�, width�� height ���� �ַܼ� �Է� �޾Ƽ� �Ҵ�
	//5. width�� height ���� �̿��� ���̸� ����Ͽ� ���
	//Rectangle rect;
	//cout << "���� �Է�: ";
	//cin >> rect.width;
	//cout << "���� �Է�: ";
	//cin >> rect.height;

	//cout << "�簢���� ����: " << rect.getArea() << endl;

	//�ǽ�2.��ǥ(Point) ����
	//����ü�� ��� �Լ��� �����Ͽ� ��ǥ ���� ����
	//1. Point ����ü�� �����ϰ�, x, y ��ǥ�� ��� ������ ����
	//2. ��ǥ ���� ���ϴ� ��� �Լ� add(constPoint&)�� ����
	//3. �� ���� Point�� �����Ͽ� ���� �Է� �ް�, add�Լ��� �̿��� ��ǥ�� ���� ���
	Point pt1;
	Point pt2;
	cout << "ù��° ���� ���� �Է�: ";
	cin >> pt1.x >> pt1.y;
	cout << "�ι��� ���� ���� �Է�: ";
	cin >> pt2.x >> pt2.y;
	
	pt1.add(pt2);
	

	return 0;
}