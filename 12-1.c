#include <stdio.h>

int main(void) {
	// 문제 1


	// 문제 2
	printf("Question 12-1.2\n");
	
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	(*ptr1) += 10;  // num1 = 20
	(*ptr2) -= 10;  // num2 = 10

	ptr1 = &num2;
	ptr2 = &num1;

	printf("%d %d \n", *ptr1, *ptr2);
}