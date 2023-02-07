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
	for (i = 0; i < 3; i++) {   // ���� �ߺ��� ��츦 ����Ͽ� �� �� Ȯ���ϴ� �ڵ�(16-17��) �߰�.
		game[i] = (rand() % 10);
		for (j = 0; j < i; j++)
			if (game[i] == game[j]) i--;
	}
		
	printf("Start Game!\n");
	while (1) {
		strike = 0, ball = 0;

		Game(game, &strike, &ball);
		printf("%d��° ���� ���: %dstrike, %dball!!\n", count++, strike, ball);

		if (strike == 3 && ball == 0) break;
	}

	printf("\nGame Over!");
}

void Game(int* game, int *strike, int *ball) {
	int user[3];

	printf("3���� ���� ����: ");
	for (int i = 0; i < 3; i++) scanf("%d", &user[i]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (user[j] == game[i]) {
				if (i == j) (*strike)++;
				else (*ball)++;
			}
	}
}