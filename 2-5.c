#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 7

int* DesSort(int* arr);

int main(void) {
	int arr[LEN];
	
	for (int i = 0; i < LEN; i++) {
		printf("ют╥б: ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr);
	for (int i = 0; i < LEN; i++) printf("%d ", arr[i]);
}

int* DesSort(int* arr) {
	int min;
	for (int i = 0; i < LEN; i++) {
		for (int j = 0; j < LEN - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				min = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = min;
			}
		}
	}

	return arr;
}