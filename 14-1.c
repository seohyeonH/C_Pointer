#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareByValue(int num);					  // 문제 1
void SquareByReference(int* num);			  // 문제 1
void Swap3(int* ptr1, int* ptr2, int* ptr3);  // 문제 2

int main(void) {
	// 문제 1
	printf("Question 14-1.1\n");

	int num1 = 10;
	int num2 = 10;

	printf("%d\n", SquareByValue(num1));

	SquareByReference(&num2);
	printf("%d\n", num2);
	


	// 문제 2
	printf("Question 14-1.2\n");

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
}

int SquareByValue(int num) {
	return num * num;
}

void SquareByReference(int* num) {
	int* ptr = num;
	*ptr *= *ptr;
}

void Swap3(int* ptr1, int* ptr2, int* ptr3){
	int temp = *ptr1;

	*ptr1 = *ptr2;   // ptr2가 가리키는 값을 ptr1이 가리키는 값에 저장.
	*ptr2 = *ptr3;   // ptr3이 가리키는 값을 ptr2가 가리키는 값에 저장.
	*ptr3 = temp;
}