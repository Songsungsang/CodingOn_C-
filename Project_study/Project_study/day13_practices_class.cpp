#include <iostream>
using namespace std;

//class Shape {
//protected: // 이 클래스와 상속된 클래스에서 접근가능
//	int edges = 0, width = 0;
//
//public:
//	Shape(int edges, int width) {
//		this->edges = edges;
//		this->width = width;
//	}
//
//	void printInfo() {
//		cout << "변의 개수: " << edges << endl;
//		cout << "밑변의 길이: " << width << endl;
//	}
//};
//
//class Rectangle : public Shape { // shape의 printInfo를 사용하기 위해선 public 지정 필수
//private:
//	int length;
//
//public:
//	Rectangle(int width, int length) : Shape(4, width){
//		this->length = length;
//	}
//
//	void area() {
//		cout << "사각형의 넓이는 " << this->width * this->length << endl;
//	}
//};
//
//class Triangle : public Shape {
//private:
//	int height;
//
//public:
//	Triangle(int width, int height) : Shape(3, width) {
//		this->height = height;
//	}
//
//	void area() {
//		cout << "삼각형의 넓이는 " << (float)(this->width * this->height) / 2 << endl;
//	}
//};

//class Vehicle {
//protected:
//	int speed;
//public:
//	string brand;
//
//	Vehicle(string brand, int speed) {
//		this->brand = brand;
//		this->speed = speed;
//	}
//
//	void showInfo() {
//		cout << "브랜드: " << this->brand << endl;
//		cout << "속도: " << this->speed << endl;
//	}
//};
//
//class Car : public Vehicle {
//private:
//	int seats;
//public:
//	Car(string brand, int speed, int seats) : Vehicle(brand, speed) {
//		this->seats = seats;
//	}
//
//	void showSeats() {
//		cout << "좌석 갯수: " << this->seats << endl;
//	}
//};
//
//class Truck : public Vehicle {
//private:
//	int capacity;
//public:
//	Truck(string brand, int speed, int capacity) : Vehicle(brand, speed), capacity(capacity) {} // class 만이 아니라 변수도 위에서 선언
//
//	void showCapacity() {
//		cout << "적재용량(kg): " << this->capacity << endl;
//	}
//};
//
//class Shape {
//public:
//	int area(int side) {
//		return side * side;
//	}
//	int area(int width, int height) {
//		return width * height;
//	}
//	double area(double radius) {
//		return radius * radius * 3.14159;
//	}
//};
//
//class Point {
//private: // 같은 클래스 끼리는 private여도 조회가능
//	int x, y;
//public:
//
//	Point(int x, int y) : x(x), y(y){}
//
//	Point operator+(Point& other) {
//		return Point(this->x + other.x, this->y + other.y);
//	}
//
//	int showX() {
//		return this->x;
//	}
//
//	int showY() {
//		return this->y;
//	}
//};

int day13_practices_class() {
//int main(){
	//실습1.상속 연습 - Shape
	//1. Shape라는 클래스를 만들어주세요.
	//	•조건 1. 변의 개수, 밑변의 길이를 저장하는 변수를 가지고 있어야 합니다
	//	•조건 2. 변의 개수와 밑변의 길이를 출력하는 printInfo() 함수를 가지고 있어야 합니다.
	//2. Shape 클래스를 상속 받는 Rectangle, Triangle 클래스를 만들어주세요.
	//	•조건 1. Rectangle클래스에는 세로 길이를 의미하는 변수를 가지고 있어야 합니다.
	//	•조건 2. Triangle클래스에는 높이 길이를 의미하는 변수를 가지고 있어야 합니다.
	//	•조건 3. 두 클래스에는 각각 도형의 넓이를 구하고 출력하는 area() 함수를 가지고 있어야 합니다.
	//	•조건 4. 두 클래스 모두 생성자에서 모든 변수에 값을 대입해주세요. (변, 밑변도 대입)
	//3. 메인 함수에서 Triangle과 Rectangle 클래스를 통해 각각 인스턴스를 만들고 area() 함수를 실행시키도록 만들어주세요.
	//Rectangle rectangle(10, 20);
	//Triangle triangle(5, 3);

	//rectangle.printInfo();
	//rectangle.area();
	//triangle.printInfo();
	//triangle.area();

	//실습2.상속과 접근 지정자
	//	1.Vehicle 클래스를 만들고, 이를 상속받아 Car와 Truck클래스를 작성하세요.
	//	2.Vehicle 클래스(부모 클래스)
	//		•조건1.브랜드 이름과 속도를 저장하는 변수를 가지고 있어야 합니다.
	//		•조건2.속도의 경우 외부에서 접근은 불가능하되, 자식 클래스에서는 사용할 수 있어야 합니다.
	//		•조건3.브랜드와 속도를 출력하는 함수가 있어야 합니다.
	//	3.Car 클래스(자식 클래스)
	//		•조건1.승객수를 저장하는 변수를 가지고 있어야 하며, 외부·자식 클래스에서 접근할 수 없어야 합니다.
	//		•조건2.승객수를 출력하는 함수를 가지고 있어야 합니다.
	//	4.Truck 클래스(자식 클래스)
	//		•조건1.적재 용량을 저장하는 변수를 가지고 있어야 하며, 외부·자식 클래스에서 접근할 수 없어야 합니다.
	//		•조건2.적재 용량을 출력하는 함수를 가지고 있어야 합니다.

	//Car car("기아", 70, 4);
	//car.showInfo();
	//car.showSeats();

	//Truck truck("토요타", 60, 2000);
	//truck.showInfo();
	//truck.showCapacity();
	
	//실습1. 함수 오버로딩 -면적 계산하기
	//Shape 클래스를 만들고, 함수 오버로딩을 활용하여 정사각형, 직사각형, 원의 면적을 계산하는 프로그램을 작성하세요.
	//	1. 정사각형의 면적 : area(int side)
	//	2. 직사각형의 면적 : area(int width, int height)
	//	3. 원의 면적 : area(double radius)
	//	• 원의 면적을 계산할 때는 π = 3.14159를 사용
	//	4. main 함수에서 각각의 면적을 계산하여 출력
	
	//Shape calcArea;

	//int squareArea = calcArea.area((int)5);
	//cout << "정사각형 넓이: " << squareArea << endl;
	//int rectArea = calcArea.area(10, 20);
	//cout << "직사각형 넓이 : " << rectArea << endl;
	//double circleArea = calcArea.area((double) 7);
	//cout << "원 넓이: " << circleArea << endl;

	//실습2. 연산자 오버로딩 -좌표연산
	//연산자 오버로딩을 이용하여 좌표간 덧셈 연산이 가능하도록 하는 프로그램을 작성하세요.
	//	1.Point 클래스를 만들고, x, y 좌표를 저장하는 멤버 변수를 포함하세요.
	//	2.operator+ 연산자를 오버로딩하여 두 Point 객체를 더할 수 있도록 하세요.
	//	3.main 함수에서 두 개의 Point 객체를 더한 결과를 출력하세요.
	//Point p1(3, 4), p2(5, 6);
	//Point p3 = p1 + p2;
	//cout << "x좌표: " << p3.showX() << " | " << "y좌표: " << p3.showY() << endl;

	return 0;
}