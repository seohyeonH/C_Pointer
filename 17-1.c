#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void MaxAndMin(int** min, int** max, int* arr);
// main함수에서 이 함수를 사용할 때 minPtr 포인터변수와 maxPtr포인터변수, arr 배열을 사용할거임.
// 포인터 변수를 가리키는 이중포인터변수 두 개, 배열을 가리키는 포인터변수 한 개를 매개변수로 선언.

int main(void) {
	int arr[SIZE];
	int* maxPtr = NULL;
	int* minPtr = NULL;

	printf("배열 입력: ");
	for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
	maxPtr = minPtr = &arr[0];

	MaxAndMin(&maxPtr, &minPtr, arr);   // maxPtr의 주소값, minPtr의 주소값, arr의 주소값 전달.
	printf("max: %d, min: %d\n", *maxPtr, *minPtr);
}

void MaxAndMin(int** min, int** max, int* arr) {
	for (int i = 0; i < SIZE; i++) {
		if (**min > arr[i]) *min = &arr[i];
		if (**max < arr[i]) *max = &arr[i];
	}
}