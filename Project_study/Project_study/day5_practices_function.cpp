#include <iostream>
#include "func.h"
using namespace std;

void oddEven(int x);
int findBiggestThree(int x, int y, int z);
int factorial(int n);
int factorialRe(int n);
int powerMultiplyRe(int a, int b);
int fibonacci(int a, int b, int c, int n);
int fibo_answer(int n);

int practice_functions() {
	//실습1.사칙연산 함수 만들기
	//(1) 두 개의 정수를 매개 변수로 받아 그 합을 리턴하는 add함수를 만드세요.
	//(2) 두 개의 정수를 매개 변수로 받아 그 차를 리턴하는 sub함수를 만드세요.
	//단, 인수의 순서에 상관없이 큰 수에서 작은 수를 뺀 결과를 리턴
	//(3) 두 개의 정수를 매개 변수로 받아 그 곱을 리턴하는 mul함수를 만드세요.
	//(4) 두 개의 정수를 매개 변수로 받아 그 나눗셈을 리턴하는 divide함수를 만드세요.
	//단, divide함수는 실수를 리턴(hint, 강제 형변환)
	//(5) main함수에서 위의 4개의 함수를 한번씩 호출하여 리턴된 값을 출력하세요.
	//cout << add(10, 20) << endl;
	//cout << sub(30, 40) << endl;
	//cout << mul(30, 30) << endl;
	//cout << divide(1, 3) << endl;

	//실습2.홀짝 판별기
	//하나의 정수를 매개변수로 받아서 그 수가 짝수이면 "짝수", 홀수이면 "홀수" 라고 출력하는 함수를 작성해 봅시다!
	//oddEven(10);
	//oddEven(15);
	//oddEven(24570);

	//실습3.최대값 찾기
	//세 개의 정수를 매개변수로 받아서 그중 가장 큰 수를 반환하는 함수를 작성해봅시다.
	//(조건문 이용, 라이브러리 X)

	//int a, b, c;
	//cin >> a >> b >> c;
	//cout << findBiggestThree(a, b, c) << endl;
	//cout << findBiggestThree(b, a, c) << endl;
	//cout << findBiggestThree(c, a, b) << endl;

	//실습4.팩토리얼(Factorial)
	//1.먼저 반복문을 활용해서 팩토리얼을 구현합니다.
	//2.1번을 바탕으로 작동 원리를 파악하고, 재귀함수를 이용해서 팩토리얼을 구현합니다.
	//3.디버거를 이용해 재귀함수의 작동을 확인합니다.

	//int n;
	//cout << "숫자를 입력하세요: ";
	//cin >> n;
	//cout << "팩토리얼" << n << " 결과: " << factorial(n) << endl;

	//int result = factorialRe(5);
	//cout << "팩토리얼: " << result << endl;

	// 실습5. 피보나치 수열(Fibonacci Numbers)
	//1.먼저 반복문을 활용해서피보나치 수열을 구현합니다.
	//2.1번을 바탕으로 작동 원리를 파악하고, 재귀함수를 이용해서 피보나치 수열을 구현합니다.
	//3.디버거를 이용해 재귀함수의 작동을 확인합니다.
	int a = 0, b = 1, c, n = 6, i;
	for (i = 1; i < n; i++) {
		if (n <= 0) break;
		c = a + b;
		cout << i << "번째 숫자 모음 -> " << a << ", " << b << ", " << c << endl;
		a = b;
		b = c;
	}

	cout << n << "번째 피보나치 수열 값: " << c << endl;

	int number, number2, n2 = 5;
	a = 0, b = 1, c = 0;
	number2 = fibonacci(a, b, c, n2);
	cout << n2 + 1 <<  "번째 재귀함수 피보나치 값: " << number2 << endl;

	number = fibo_answer(n);
	cout << n << "번째 재귀함수 피보나치 값: " << number << endl;

	//실습6.거듭 제곱
	//자연수 a와 b가 주어졌을 때, a의 b제곱을 계산하는 재귀 함수를 만들어 봅시다.
	//▪거듭 제곱은 다음과 같이 정의됩니다 :
	//a^b = a x a^(b-1)

	//int a = 2, b = 6;
	//int result = 0;

	//result = powerMultiplyRe(a, b);
	//cout << "거듭 제곱 결과: " << result << endl;

	return 0;
}

void oddEven(int x) {
	if (x % 2 == 1) {
		cout << "홀수입니다!" << endl;
	}
	else {
		cout << "짝수입니다!" << endl;
	}
}

int findBiggestThree(int x, int y, int z) {
	int biggest = x;
	if (y > biggest) {
		biggest = y;
	}
	if (z > biggest) {
		biggest = z;
	}

	return biggest;
}

int factorial(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

int factorialRe(int n) {
	if (n == 1) return 1;
	int factValue = factorialRe(n-1);
	return n * factValue;
}

int fibonacci(int a, int b, int c, int n) { // 시작 a = 1, b = 1, c = 0
	if (n <= 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 2;
	c = a + b;
	a = b;
	b = c;
	return c + fibonacci(a, b, c, n-1);
}

int fibo_answer(int n) { // 재귀함수를 노리는 실제 정답
	if (n <= 0) return 0;
	if (n <= 2) return 1;
	return fibo_answer(n - 1) + fibo_answer(n - 2); // 아 n-1과 n-2를 계속 더해서 쌓아나가는 구나
}

int powerMultiplyRe(int a, int b) {
	// a^b = a x a^(b-1)
	if (b == 1) return a;
	int result = powerMultiplyRe(a, b-1);
	return result * a;
}