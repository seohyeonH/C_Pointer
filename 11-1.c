#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 문제 1
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
	
	// 문제 2
	char arr[] = "Good time";
	for (int i = 0; arr[i] != '\0'; i++) printf("%c", arr[i]);
	
	return 0;
}
