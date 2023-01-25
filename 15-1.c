#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printodd(int* arr);
void printeven(int* arr);

int main(void) {
	int arr[10];
	
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	printodd(arr);
	printeven(arr);
	return 0;
}

void printodd(int* arr) {
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 1) printf("%d ", arr[i]);
	printf("\n");
}

void printeven(int* arr) {
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 0) printf("%d ", arr[i]);
	printf("\n");
}
