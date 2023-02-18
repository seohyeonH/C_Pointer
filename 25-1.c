#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func2(int n) {
	int num3 = n + 1;
}

void func1(int n) {
	int num2 = n + 1;
	func2(num2);
}

int main(void) {
	int num1 = 20;
	func1(num1);
	return 0;
}

// 스택 메모리 생성: num1 = 20 -> n = 20 -> num2 = 21 -> n = 21 -> num3 = 22
// 스택 메모리 소멸: num3 = 22 & n = 21 -> num2 = 21 & n = 20 -> num1 = 20 (return 0)