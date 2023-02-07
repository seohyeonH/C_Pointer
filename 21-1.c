#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convert(int n);

int main(void) {
	int w1;
	w1 = getchar();
	
	w1 = convert(w1);
	if (w1 == -1) printf("잘못 입력하셨습니다.");
	else putchar(w1);
}

int convert(int n) {
	if (n >= 'A' && n <= 'Z') return n += 32;  // A: 65, Z: 90
	else if (n >= 'a' && n <= 'z') return n -= 32;   // a: 97, z: 122
	else return -1;
}