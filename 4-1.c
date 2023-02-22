#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct book {
	char author[10];
	char title[30];
	int page;
} Book;

void printInfo(Book list[3]) {
	printf("도서 정보 출력\n");
	for (int i = 0; i < 3; i++) {
		printf("저자: %s\n", list[i].author);
		printf("제목: %s\n", list[i].title);
		printf("페이지 수: %d\n", list[i].page);
	}
}

int main(void) {
	Book list[3];

	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++) {
		printf("저자: ");
		gets_s(list[i].author, 10);

		printf("제목: ");
		gets_s(list[i].title, 30);

		printf("페이지 수: ");
		scanf("%d", &list[i].page);
		
		getchar();
	}

	printInfo(list);
}