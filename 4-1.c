#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct book {
	char author[10];
	char title[30];
	int page;
} Book;

void printInfo(Book list[3]) {
	printf("���� ���� ���\n");
	for (int i = 0; i < 3; i++) {
		printf("����: %s\n", list[i].author);
		printf("����: %s\n", list[i].title);
		printf("������ ��: %d\n", list[i].page);
	}
}

int main(void) {
	Book list[3];

	printf("���� ���� �Է�\n");
	for (int i = 0; i < 3; i++) {
		printf("����: ");
		gets_s(list[i].author, 10);

		printf("����: ");
		gets_s(list[i].title, 30);

		printf("������ ��: ");
		scanf("%d", &list[i].page);
		
		getchar();
	}

	printInfo(list);
}