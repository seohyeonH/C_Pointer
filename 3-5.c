#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int com, me;
	int win = 0, draw = 0;
	char* game[3] = { "����", "����", "��" };
	srand((int)time(NULL));

	while (1) {
		printf("������ 1, ������ 2, ���� 3 : ");
		scanf("%d", &me);

		com = rand() % 3 + 1;  // 1 ~ 3
		printf("����� %s ����, ��ǻ�ʹ� %d ����, ", *game[me - 1], *game[com - 1]);

		if (me == com) {
			printf("�����ϴ�!\n"); draw++;
		}
		else if ((me == 1 && com == 2) || (me == 2 && com == 3) || (me == 3 && com == 1)) {
			printf("����� �̰���ϴ�!\n"); win++;
		}
		else {
			printf("����� �����ϴ�!\n"); break;
		}
	}

	printf("\n������ ��� : %d��, %d��", win, draw);
}