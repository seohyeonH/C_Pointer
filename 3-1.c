#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rotate(int* (*arr)[4]) {  // 2차원 배열 주소를 매개변수로 전달
	int cnt, temp;
	int k = 0;
	for (int i = 0; i < 1; i++) {
		cnt = 0;
		for (int j = 0; j < 4; j++) {
			if (cnt == 0) temp = *arr[j][3 - k];
			
			if (cnt == 3) *arr[j][3 - k] = temp;
			else *arr[j][3 - k] = *arr[i][j];
			
			cnt++;
		}
		k++;
	}
}

int main(void) {
	int arr[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	int* ptr[4][4];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) ptr[i][j] = &arr[i][j];

	rotate(ptr);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) printf("%2d ", arr[i][j]);
		printf("\n");
	}
}