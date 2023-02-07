#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

int main(void) {
	int num;
	int arr[MAX][MAX] = { 0 };
	printf("숫자를 입력하시오 : ");
	scanf("%d", &num);

	int count = 1, i = 0, j = 0;
	while (count <= num * num) {
		if (arr[i][j] != 0) {  // 한 바퀴 돈 후, 옆칸으로 옮기기
			i++; j++;
		}
		else {
			if (j == num - i - 1) arr[i][j] = count++; // 홀수인 경우 생기는 마지막 한 칸 처리

			while (j < num - i - 1) arr[i][j++] = count++;  // →
			while (j > num - i - 1) arr[i][j--] = count++;  // ←

			while (i < j) arr[i++][j] = count++;            // ↓
			while (i > j) arr[i--][j] = count++;            // ↑
		}
	}

	for (int n = 0; n < num; n++) {
		for (int m = 0; m < num; m++) printf("%2d ", arr[n][m]);
		printf("\n");
	}
}