#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
	int ret, Acount, Pcount;
	FILE* fp = fopen("text.txt", "rt");

	Acount = Pcount = 0;
	while (1) {
		ret = fscanf(fp, "%s", str);
		if (ret == EOF) break;

		if (str[0] == 'A') Acount++;
		else if(str[0] == 'P') Pcount++;
	}

	printf("C: text.txt\n");
	printf("A�� �����ϴ� �ܾ��� ��: %d\n", Acount);
	printf("P�� �����ϴ� �ܾ��� ��: %d\n", Pcount);

	fclose(fp);
}