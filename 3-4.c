#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((int)time(NULL));

	printf("�ֻ��� 1�� ��� %d \n", rand() % 6 + 1);
	printf("�ֻ��� 2�� ��� %d \n", rand() % 6 + 1);
}