#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

void rotate(int(*arr)[4], int (*res)[4]) {
	int k = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			res[j][3 - k] = arr[i][j];

		k++;
	}
}

int main(void) {
	int arr[SIZE][SIZE] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	int res[SIZE][SIZE] = { 0 };

	rotate(arr, res);   // arr의 주소값, res의 주소값 전달

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) printf("%2d ", res[i][j]);
		printf("\n");
	}
}
