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
	printf("A로 시작하는 단어의 수: %d\n", Acount);
	printf("P로 시작하는 단어의 수: %d\n", Pcount);

	fclose(fp);
}
