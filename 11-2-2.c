#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int len = 0;
	char arr[10], temp;
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;
	for (int i = 0; i < len / 2; i++) {
		temp = arr[len - i - 1];
		arr[len - i - 1] = arr[i];
		arr[i] = temp;
	}

	printf("역순 문자열 출력: %s", arr);
	return 0;
}