#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 문제 1
	printf("Question 11-2.1\n");
	
	int len = 0;
	char arr[10];
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;  // 널문자가 발견될 때까지 len에 1 더하기
 	printf("영단어의 길이 : %d", len);
	


	// 문제 2
	printf("Question 11-2.2\n");
	
	int len = 0;
	char arr[10], temp;
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;   // 길이 계산
	
	for (int i = 0; i < len / 2; i++) {  // 길이가 9라면 배열의 네번째 요소까지만 계산함.
		temp = arr[len - i - 1];     // len - i -1은 배열이 0번째부터 시작하기 때문임
 		arr[len - i - 1] = arr[i];
		arr[i] = temp;
	}
	
	printf("역순 문자열 출력: %s", arr);



	// 문제 3
	printf("Question 11-2.3\n");
	
	int max;
	char arr[10];
	scanf("%s", arr);

	max = arr[0];  // 배열의 첫번째 요소를 max로 지정.
	for (int i = 0; arr[i] != '\0'; i++)
		if (max < arr[i]) max = arr[i];   // 아스키코드로 계산하며, max값보다 큰 값이 발견될 경우.

	printf("아스키 코드 값이 가장 큰 문자 : %c", max);
}
