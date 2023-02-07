#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int com, me;
	int win = 0, draw = 0;
	char* game[3] = { "가위", "바위", "보" };
	srand((int)time(NULL));

	while (1) {
		printf("바위는 1, 가위는 2, 보는 3 : ");
		scanf("%d", &me);

		com = rand() % 3 + 1;  // 1 ~ 3
		printf("당신은 %s 선택, 컴퓨터는 %d 선택, ", *game[me - 1], *game[com - 1]);

		if (me == com) {
			printf("비겼습니다!\n"); draw++;
		}
		else if ((me == 1 && com == 2) || (me == 2 && com == 3) || (me == 3 && com == 1)) {
			printf("당신이 이겼습니다!\n"); win++;
		}
		else {
			printf("당신이 졌습니다!\n"); break;
		}
	}

	printf("\n게임의 결과 : %d승, %d무", win, draw);
}
