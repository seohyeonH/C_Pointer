#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 10

int main(void) {
	int arr[LEN];
	int num;
	int odd = 0, even = LEN -1;

	for (int i = 0; i < LEN; i++) {
		printf("ÀÔ·Â: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) arr[even--] = num;
		else arr[odd++] = num;
	}

	printf("¹è¿­ ¿ä¼ÒÀÇ Ãâ·Â: ");
	for (int i = 0; i < LEN; i++) printf("%d ", arr[i]);
	return 0;
}
