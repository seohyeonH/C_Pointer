#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Game(int* game, int* strike, int* ball);

int main(void) {
	int i, j, count, strike, ball;
	int game[3];

	count = 1; 
	srand((int)time(NULL));
	for (i = 0; i < 3; i++) {   // 값이 중복될 경우를 대비하여 한 번 확인하는 코드(16-17줄) 추가.
		game[i] = (rand() % 10);
		for (j = 0; j < i; j++)
			if (game[i] == game[j]) i--;
	}
		
	printf("Start Game!\n");
	while (1) {
		strike = 0, ball = 0;

		Game(game, &strike, &ball);
		printf("%d번째 도전 결과: %dstrike, %dball!!\n", count++, strike, ball);

		if (strike == 3 && ball == 0) break;
	}

	printf("\nGame Over!");
}

void Game(int* game, int *strike, int *ball) {
	int user[3];

	printf("3개의 숫자 선택: ");
	for (int i = 0; i < 3; i++) scanf("%d", &user[i]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (user[j] == game[i]) {
				if (i == j) (*strike)++;
				else (*ball)++;
			}
	}
}
