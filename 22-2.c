#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[10];
	char ID[15];
	int salary;
};

int main(void) {
	struct employee user[3];

	for (int i = 0; i < 3; i++) {
		printf("�̸��� �ۼ����ּ��� : ");
		scanf("%s", user[i].name);
		printf("�ֹι�ȣ�� �ۼ����ּ��� : ");
		scanf("%s", user[i].ID);
		printf("�޿������� �ۼ����ּ��� : ");
		scanf("%d", &user[i].salary);
		printf("\n");
	}
	
	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s, �ֹι�ȣ: %s, �޿�����: %d \n", user[i].name, user[i].ID, user[i].salary);
	}
	
}