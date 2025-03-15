#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
	virtual void accelerate() {
		cout << "시속 10km 증가!" << endl;
	}

	virtual ~Vehicle() {} // 가상 소멸자로 설정. 자식의 소멸자도 작동시켜주는거 확실하게 되도록
};

class RegularCar : public Vehicle {
public:
	void accelerate() override {
		cout << "차량 시속 20km 증가!" << endl;
	}
};

class SportsCar : public Vehicle {
public:
	void accelerate() override {
		cout << "스포츠카 시속 40km 증가!" << endl;
	}
};

class Truck : public Vehicle {
public:
	void accelerate() override {
		cout << "트럭 시속 30km 증가!" << endl;
	}
};

class Snack {
protected:
	string productName, company;
	int price;
public:
	Snack(string productName, string company, int price) : productName(productName), company(company), price(price){}

	virtual void printInfo() = 0; //순수 가상함수
};

class Candy : public Snack {
protected:
	string taste;
public:
	Candy(string productName, string company, int price, string taste) : Snack(productName, company, price), taste(taste){}

	void printInfo() override { //가상함수 기능 구체화
		cout << "제품이름: " << this->productName << " | 회사: " << this->company << " | 가격: " << price << " | 맛: "  << taste << endl;
	}
};

class Chocolate : public Snack {
protected:
	string shape;
public:
	Chocolate(string productName, string company, int price, string shape) : Snack(productName, company, price), shape(shape) {}

	void printInfo() override { // 자식에서 구체화
		cout << "제품이름: " << this->productName << " | 회사: " << this->company << " | 가격: " << price << " | 모양: " << shape << endl;
	}
};

class Chatbot {
public:
	virtual void respond(string message) = 0; // 순수 가상함수
};

class CustomerSupportBot : public Chatbot {
public:
	void respond(string message) override {
		cout << "고객 지원 문의를 처리합니다 : [" << message << "]" << endl;
	}
};

class WeatherBot : public Chatbot {
public:
	void respond(string message) override {
		cout << "현재 날씨 정보를 제공합니다: [" << message << "]" << endl;
	}
};

int main() {
	//실습3. 오버라이딩 -자동차 가속 기능 구현
	//1.Vehicle 클래스를 만들고, accelerate()라는 함수를 정의하세요.
	//2.Car, SportsCar, Truck 클래스를 Vehicle 클래스로부터 상속받아 각각 accelerate()를 오버라이딩하세요.(가속도를 각각 다르게 설정)
	//3.main()에서 각 차량의 accelerate()가 올바르게 실행되는지 확인하세요.
	//Vehicle* vehicle;
	//int input = 0;

	//cout << "자동차 유형을 선택하세요: " << endl;
	//cout << "1. Car (일반 자동차)" << endl
	//	<< "2. Sports Car (스포츠카)" << endl
	//	<< "3. Truck (트럭)" << endl;
	//cout << "입력: ";
	//cin >> input;

	//if (input == 1) {
	//	vehicle = new RegularCar();
	//}
	//else if (input == 2) {
	//	vehicle = new SportsCar();
	//}
	//else {
	//	vehicle = new Truck();
	//}

	//if (vehicle) {
	//	vehicle->accelerate();
	//}

	//실습4.과자, 사탕, 초콜릿
	//1.추상 클래스 Snack
	//	•productName, company, price 변수를 포함(모든 간식 공통 속성)
	//	•printInfo()를 순수 가상 함수로 선언 → 자식 클래스에서 오버라이딩
	//2.Candy 클래스
	//	•taste 변수 추가(맛을 저장)
	//	•printInfo() 오버라이딩하여 출력
	//3.Chocolate 클래스
	//	•shape 변수 추가(모양을 저장)
	//	•printInfo() 오버라이딩하여 출력
	//4.메인 함수에서 snackBasket배열 생성
	//	•Candy와 Chocolate 객체 각각 2개씩 생성 후 배열에 저장
	//	•다형성 활용하여 Snack * 배열을 통해 모든 간식 정보 출력

	//Snack* snackBasket[4] = {new Candy("박하사탕", "바카", 500, "단맛"), new Candy("홍삼캔디", "정관장", 1000, "쓴맛"),
	//	new Chocolate("허쉬초코렛", "허쉬", 2000, "네모남"), new Chocolate("가나", "롯데", 1200, "박스박스")};

	//for (Snack* s : snackBasket) {
	//	s->printInfo();
	//}

	//for (Snack* s : snackBasket) {
	//	delete s;
	//}

	//실습5. AI 챗봇 시스템 설계
	//1.Chatbot이라는 추상 클래스를 만들고, respond(string message)라는 순수 가상 함수를 선언하세요.
	//2.CustomerSupportBot(고객 지원 봇)과 WeatherBot(날씨 봇)을 만들어 respond()를 다르게 구현하세요.
	//	•CustomerSupportBot클래스는 "고객 지원 문의를 처리합니다: [사용자 입력]" 출력.
	//	•WeatherBot클래스는 "현재 날씨 정보를 제공합니다: [사용자 입력]" 출력.
	//3.main()에서 Chatbot * 포인터를 사용하여 두 챗봇을 실행.

	Chatbot* chatbot = nullptr;
	string message = "";
	string input = "";
	int option;
	bool accessService = true;

	//chatbot = new CustomerSupportBot(); // 고객응대
	//cout << "문의가 필요한 사항 입력: ";
	//cin >> message;
	//chatbot->respond(message);
	//delete chatbot;

	//chatbot = new WeatherBot(); // 기상관측
	//cout << "정보제공이 필요한 날짜 정보 입력: ";
	//cin >> message;
	//chatbot->respond(message);
	//delete chatbot;

	cout << "챗봇 시스템을 사용해 주심에 감사드립니다" << endl;
	while (accessService == true) {
		cout << "서비스 유형을 선택해주세요 " << endl;
		cout << "1. 고객응대서비스" << endl
			<< "2. 기상서비스" << endl
			<< "3. 서비스 종료" << endl;
		cin >> option; // option을 cin으로 받으려고 하면 enter 값이 option의 getlin으로 들어감
		cin.ignore(); // 입력 뒤에 \n 값을 무시해버림
		switch (option) {
		case 1:
			cout << "고객응대서비스 선택" << endl;
			chatbot = new CustomerSupportBot(); // 고객응대
			cout << "문의가 필요한 사항 입력: ";
			getline(cin, message);
			chatbot->respond(message);
			delete chatbot;
			break; // switch에서 break가 없을시 바로 다음의 2로 넘어감
		case 2:
			cout << "기상서비스 선택" << endl;
			chatbot = new WeatherBot(); // 기상관측
			cout << "정보제공이 필요한 날짜 정보 입력: ";
			getline(cin, message);
			chatbot->respond(message);
			delete chatbot;
			break;
		case 3:
			cout << "서비스 종료. 좋은 하루 되시기 바랍니다" << endl;
			accessService = false;
			break;
			;
		default: // switch의 else
			cout << "옵션을 다시 선택해주세요" << endl;
		}
	}

	return 0;
}