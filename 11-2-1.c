#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int len = 0;
	char arr[10];
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;

	printf("영단어의 길이 : %d", len);
	return 0;
}