#include "func.h"

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	int result = x - y;
	if (result < 0) {
		result *= -1;
	}
	return result;
}

int mul(int x, int y) {
	return x * y;
}

float divide(int x, int y) {
	float result = 0;
	result = (float)x / y;

	return result;
}

int realGlobalVar = 100; // cpp 파일에서 값 초기화