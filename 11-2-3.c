#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int max;
	char arr[10];
	scanf("%s", arr);

	max = arr[0];
	for (int i = 0; arr[i] != '\0'; i++)
		if (max < arr[i]) max = arr[i];

	printf("아스키 코드 값이 가장 큰 문자 : %c", max);
	return 0;
}