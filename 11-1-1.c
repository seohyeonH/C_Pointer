#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int min, max;
	int sum = 0;
	int arr[5];

	for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

	min = arr[0]; max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];

		sum += arr[i];
	}

	printf("최댓값: %d, 최솟값: %d, 총 합: %d", max, min, sum);
	return 0;
}
