#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 7

void DesSort(int* arr);

int main(void) {
	int arr[LEN];
	
	for (int i = 0; i < LEN; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr);
	for (int i = 0; i < LEN; i++) printf("%d ", arr[i]);
}

void DesSort(int* arr) {
	int min;
	for (int i = 0; i < LEN - 1; i++) {  
		for (int j = 0; j < LEN - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				min = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = min;
			}
		}
	}
}
