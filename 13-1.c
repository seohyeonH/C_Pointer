#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 巩力 1
	printf("Question 13-1.1\n");
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr; //*ptr = &arr[0];

	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;
	}

	for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
	

	
	// 巩力 2
	printf("Question 13-1.2\n");
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr; //*ptr = &arr[0];

	for (int i = 0; i < 5; i++) *(ptr + i) += 2;
	printf("%d %d %d %d %d", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));



	// 巩力 3
	printf("Question 13-1.3\n");
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *ptr;
		ptr--;
	}
	printf("%d", sum);



	// 巩力 4
	printf("Question 13-1.4\n");

	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* front = &arr[0];
	int* back = &arr[5];
	int mid = 0;

	for (int i = 0; i < 3; i++) {
		mid = *(front + i);
		*(front + i) = *(back - i);
		*(back - i) = mid;
	}

	for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
}