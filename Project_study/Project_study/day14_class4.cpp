#include <iostream>
using namespace std;

class Animal { // 추상 클래스. 순수가상함수를 하나라도 가짐 -> 인터페이스, 자식요소의 틀을 제공함
public:
	virtual void speak() = 0; // override를 위해 virtual 선언. 가상함수, abstract - 추상 메쏘드
}; // = 0 -> 순수가상함수(부모는 구현을 가지고 있으면 안되고 자식이 구체화)

class Dog : public Animal {
public:
	void speak() override { //override를 하겠다고 선언. 
		cout << "멍멍" << endl;
	}

	void tailSwing() {
		cout << "꼬리흔들흔들" << endl;
	}
};

class Dinosaur : public Animal {
public:
	void speak() override {
		cout << "크롱크롱" << endl;
	}
};

int day14_class4() {
//int main() {
	Dog dog; // Dog에서 speak 구현 안하면 오류
	dog.speak();

	Animal* animal = nullptr; // 동물 포인터
	Dinosaur dino; // 공룡 인스턴스 생성

	animal = &dino; // 애니멀 포인터에 dino라는 공룡 클래스의 인스턴스 담음
	animal->speak(); // dino의 speak를 사용할 수 있게 됨.
	// 포인터 -> 메모리 바라보는 방식. 포인터로 가보니 부모로부터 받은 speak 있음. 근데 자식이 가진 speak 실행
	// 포인터가 dino를 animal로 간주하고 바라봄. override를 하면 가상테이블이 생기고 자식 요소가 들어감.
	// speak를 실행할때 부모에 virtual 이 있다면 가상테이블에서 가리킨 자식의 speak 사용함

	animal = &dog;
	animal->speak();
	// animal->tailSwing(); // animal 에서는 dog의 tailSwing을 사용하지 못함. 왜냐하면 Animal의 포인터인 상태에서
	// tailSwing이 존재하지 않으니 tailSwing을 바라볼 방법이 없음

	animal = nullptr;
	string choice;
	cout << "동물 선택(개, 공룡): " << endl;
	cin >> choice;

	if (choice == "강아지") {
		animal = new Dog(); // 동적으로 dog 변수 없이 DOg 새로 할당
	}
	else {
		animal = new Dinosaur();
	}
	animal->speak();
	delete animal; // 다 사용한 메모리 풀어줌

	return 0;
}