#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printodd(int* arr);
void printeven(int* arr);

int main(void) {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	printodd(arr);
	printeven(arr);
	return 0;
}

void printodd(int* arr) {
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 1) printf("%d ", arr[i]);
	printf("\n");
}

void printeven(int* arr) {
	printf("¦�� ���: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 0) printf("%d ", arr[i]);
	printf("\n");
}