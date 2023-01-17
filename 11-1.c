#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// ¹®Á¦ 1
	printf("Question 11-1.1\n");
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
	printf("ÃÖ´ñ°ª: %d, ÃÖ¼Ú°ª: %d, ÃÑ ÇÕ: %d", max, min, sum);
	

	// ¹®Á¦ 2
	printf("Question 11-1.2\n");
	char arr[] = "Good time";
	
	for (int i = 0; arr[i] != '\0'; i++) printf("%c", arr[i]);
}