#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define WIDTH 3
#define HEIGHT 9

int main(void) {
	// 문제 1
	printf("Question 16-1.1\n");
	int arr[WIDTH][HEIGHT];
	int std = 2;    // 문제에서 제시한 구구단은 2단부터이므로 기준을 2로 잡아두었음.

	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) arr[i][j] = (i + std) * (j + 1);
	}

	for (int i = 0; i < WIDTH; i++) {
		printf("%d단\n", std++);
		for (int j = 0; j < HEIGHT; j++) printf("%d ", arr[i][j]);
		printf("\n");
	}

	
	// 문제 2
	printf("\nQuestion 16-1.2\n");
	int arr1[][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) arr2[i][j] = arr1[j][i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) printf("%d ", arr2[i][j]);
		printf("\n");
	}

	
	// 문제 3
	printf("\nQuestion 16-1.3\n");
	int grade[5][5] = { 0 };
	// {{5, 4, 6, 5}, {3, 6, 9, 3}, {4, 8, 2, 7}, {3, 8, 9, 7}}

	printf("국어, 영어, 수학, 국사 순으로 입력\n");
	for (int i = 0; i < 4; i++) {
		printf("%d번째 학생의 성적: ", i + 1);

		for (int j = 0; j < 4; j++) {        // 입력하고 바로 저장하는 방법
			scanf("%d", &grade[i][j]);
			grade[i][4] += grade[i][j];  // 개인별 총점
			grade[4][j] += grade[i][j];  // 과목별 총점
			grade[4][4] += grade[i][j];  // 총점
		}
	}

	/*for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) scanf("%d", &grade[i][j]);
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			grade[i][4] += grade[i][j];  // 개인별 총점
			grade[4][i] += grade[j][i];  // 과목별 총점
		}
		grade[4][4] += grade[4][i];  // 총점
	}*/

	for (int i = 0; i < 5; i++) {
		if (i < 4) printf("%12d: ", i + 1);
		else printf("과목별 총점: ");
		for (int j = 0; j < 5; j++) printf("%2d ", grade[i][j]);
		printf("\n");
	}
}
