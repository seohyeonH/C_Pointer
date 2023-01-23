#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DectoBin(int num);

int main(void) {
	int num;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	DectoBin(num);
	return 0;
}

void DectoBin(int num) {
	int arr[10] = { 0 };
	int len = 0;

	while(1){
		arr[len++] = num % 2;
		if (num / 2 == 0) break;
		else num /= 2;
	}

	if(num / 2 == 0) for (int i = len - 1; i >= 0; i--) printf("%d", arr[i]);
}