#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 문제 1
	printf("Question 13-1.1\n");
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr; //*ptr = &arr[0];

	for (int i = 0; i < 5; i++) {
		*ptr += 2;    // ptr이 가리키고 있는 주소의 값에 2 더하기
		ptr++;        // ptr의 주소 변경 ( *ptr = &arr[0] -> &arr[1] -> &arr[2] ... 
	}

	for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
	

	
	// 문제 2
	printf("Question 13-1.2\n");
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr; //*ptr = &arr[0];

	for (int i = 0; i < 5; i++) *(ptr + i) += 2;
	printf("%d %d %d %d %d", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));



	// 문제 3
	printf("Question 13-1.3\n");
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *ptr;    // sum에 ptr이 가리키고 있는 곳의 값을 더해줌
		ptr--;          // ptr이 가리키는 주소 변경
	}
	printf("%d", sum);



	// 문제 4
	printf("Question 13-1.4\n");

	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* front = &arr[0];
	int* back = &arr[5];
	int mid = 0;

	for (int i = 0; i < 3; i++) {        // i = 0인 경우,
		mid = *(front + i);          // mid = *front = &arr[0]
		*(front + i) = *(back - i);  // *front = *back = &arr[5]
		*(back - i) = mid;           // *back = &arr[0]
	}

	for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
}
