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
	void add(const Point &other) { // point struct에 직접 접근하려고 함. & 없어도 코드는 돌아가지만 메모리 참조가 더 빠름 
		int xAdd = x + other.x;
		int yAdd = y + other.y;
		cout << "x의 합: " << xAdd << endl;
		cout << "y의 합: " << yAdd << endl;
	}
};

int day11_practices_struct() {
	//실습1.구조체 사용해보기
	//1. Rectangle 구조체 만들기
	//2. 사각형의 가로 세로 길이를 저장하는 구조체
	//3. 변수 width, height
	//4. 구조체를 이용하여 변수를 생성하고, width와 height 값을 콘솔로 입력 받아서 할당
	//5. width와 height 값을 이용해 넓이를 계산하여 출력
	//Rectangle rect;
	//cout << "가로 입력: ";
	//cin >> rect.width;
	//cout << "세로 입력: ";
	//cin >> rect.height;

	//cout << "사각형의 넓이: " << rect.getArea() << endl;

	//실습2.좌표(Point) 연산
	//구조체에 멤버 함수를 정의하여 좌표 연산 수행
	//1. Point 구조체를 정의하고, x, y 좌표를 멤버 변수로 포함
	//2. 좌표 값을 더하는 멤버 함수 add(constPoint&)를 구현
	//3. 두 개의 Point를 생성하여 값을 입력 받고, add함수를 이용해 좌표의 합을 출력
	Point pt1;
	Point pt2;
	cout << "첫번째 점에 대한 입력: ";
	cin >> pt1.x >> pt1.y;
	cout << "두번쨰 점에 대한 입력: ";
	cin >> pt2.x >> pt2.y;
	
	pt1.add(pt2);
	

	return 0;
}