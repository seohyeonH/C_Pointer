#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowData(const int* ptr);

int main(void) {
	// 문제 1
	printf("Question 14-2.1\n");
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

void ShowData(const int* ptr) {
	int* rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
	printf("%d \n", *rptr);
}
