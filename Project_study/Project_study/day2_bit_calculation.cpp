#include <iostream>
#include <bitset>
using namespace std;

int bit_calculation() {
	// & (and) 비트 연산에서는 & 한개만 사용
	//int a = 0b0101; // 5
	//int b = 0b1001; // 9
	//cout << bitset<4>(a & b) << endl; // 공통되는 비트를 마지막 1을 불러옴
	
	//cout << bitset<4>(a | b) << endl // 하나라도 1이면 1 유지


	// ^ (xor) 비트가 같으면 0 다르면 1
	//int c = 0b1010;
	//int d = 0b1001;
	//cout << bitset<4>(c ^ d) << endl;

	//시프트
	//int e = 0b0001;
	//cout << bitset<4>(e << 2) << endl;

	//e = 0b0011;
	//cout << bitset<4>(e >> 1); // 1비트 1개가 날아감

	//특정 비트의 추가와 제거
	int f = 0b1000;
	//비트추가
	cout << bitset<4>(f |= (1 << 1)) << endl; // or 사용
	//비트 추가된 상태
	cout << bitset<4>(f) << endl;
	//비트제거
	cout << bitset<4>(f & ~(1 << 1)) << endl; // and와 not을 같이 사용


	return 0;
}