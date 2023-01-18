#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 문제 1
	printf("Question 11-1.1\n");
	int min, max;
	int sum = 0;
	int arr[5];

	for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

	min = arr[0]; max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (min > arr[i]) min = arr[i];  // min값보다 작은 값이 발견된다면
		if (max < arr[i]) max = arr[i];  // max값보다 큰 값이 발견된다면

		sum += arr[i];
	}
	printf("최댓값: %d, 최솟값: %d, 총 합: %d", max, min, sum);
	

	// 문제 2
	printf("Question 11-1.2\n");
	char arr[] = "Good time";  // 선언과 동시에 초기화
	
	for (int i = 0; arr[i] != '\0'; i++) printf("%c", arr[i]);
}
