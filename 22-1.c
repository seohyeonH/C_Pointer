#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[10];
	char ID[15];
	int salary;
};

int main(void) {
	struct employee user;

	printf("�̸��� �ۼ����ּ��� : ");
	scanf("%s", user.name);
	printf("�ֹι�ȣ�� �ۼ����ּ��� : ");
	scanf("%s", user.ID);
	printf("�޿������� �ۼ����ּ��� : ");
	scanf("%d", &user.salary);

	printf("�̸�: %s, �ֹι�ȣ: %s, �޿�����: %d \n", user.name, user.ID, user.salary);
}