#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

int main(void) {
	int num;
	int arr[MAX][MAX] = { 0 };
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	int count = 1, i = 0, j = 0;
	while (count <= num * num) {
		if (arr[i][j] != 0) {  // �� ���� �� ��, ��ĭ���� �ű��
			i++; j++;
		}
		else {
			if (j == num - i - 1) arr[i][j] = count++; // Ȧ���� ��� ����� ������ �� ĭ ó��

			while (j < num - i - 1) arr[i][j++] = count++;  // ��
			while (j > num - i - 1) arr[i][j--] = count++;  // ��

			while (i < j) arr[i++][j] = count++;            // ��
			while (i > j) arr[i--][j] = count++;            // ��
		}
	}

	for (int n = 0; n < num; n++) {
		for (int m = 0; m < num; m++) printf("%2d ", arr[n][m]);
		printf("\n");
	}
}