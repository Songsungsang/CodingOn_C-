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
////	Rectangle* compareArea(Rectangle& other) { // 여기서의 & = 메모리에 접근해서 값을 가져온다
////		int thisArea = this->getArea();
////		int otherArea = other.getArea();
////
////		if (otherArea > thisArea) return &other;  // 사각형의2의 넓이가 더 크면. &붙여서 주소 받아오기
////		return this; // Rectangle*이 리턴타입이기 때문에 자기 자신을 가리키는 포인터 this를 반환
////	}
////
////	void showInfo() {
////		cout << "사각형의 넓이: " << getArea() << endl;
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
////		cout << "사용자 정보| [ID] : " << this->ID << " [이름] : " << this->name << endl;
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
//	//실습1. 두 객체 비교 및 반환
//	//1. Rectangle 클래스를 만든다.
//	//2. width(가로)와 height(세로)를 멤버 변수로 포함한다.
//	//3. getArea() 멤버 함수를 작성하여 넓이를 반환한다.
//	//4. compareArea(Rectangle& other) 멤버 함수를 추가하여 현재 객체와 다른 객체의 넓이를 비교
//	//5. 더 넓은 객체를 반환하도록 한다.
//	//6. this 포인터를 활용하여 this->getArea() vsother.getArea() 비교 후 더 큰 객체 반환
//	//7. main()에서 두 개의 Rectangle 객체를 생성하고, 넓이가 더 큰 객체의 정보를 출력
//	//Rectangle rect1(10, 20);
//	//Rectangle rect2(30, 40);
//
//	//Rectangle* bigRect = rect1.compareArea(rect2); // return 값이 Rectangle* 이므로 this 받아오기
//
//	//cout << "큰 사각형" << endl;
//	//bigRect->showInfo(); // pointer니까 . 이 아니라 ->으로 메쏘드 chain
//
//	//실습2.유일한 ID 할당
//	//User u1("배길수");
//	//User u2("이마엘");
//	//User u3("하수길");
//	//User u4("이상");
//
//	//
//	//cout << "사용자 정보 무더기: " << endl;
//	//u1.showInfo();
//	//u2.showInfo();
//	//u3.showInfo();
//	//u4.showInfo();
//
//	//cout << "총 사용자 수: " << User::getTotalUsers() << endl;
//
//	return 0;
//}