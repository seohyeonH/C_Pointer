#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 문제 1
	printf("Question 11-2-1\n");
	int len = 0;
	char arr[10];
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;
	printf("영단어의 길이: %d", len);

	
	// 문제 2
	printf("Question 11-2-2\n");
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
	
	
	// 문제 3
	printf("Question 11-2-3\n");
	
}
