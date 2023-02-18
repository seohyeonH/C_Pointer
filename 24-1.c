#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = fopen("mystory.txt", "wt");
	
	fputs("#이름: 홍서현\n", fp);
	fputs("#주민번호: 010928-4200223\n", fp);
	fputs("#전화번호: 01099753084\n", fp);
	fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", fp);
	fputs("#취미: 축구\n", fp);

	fclose(fp);

	FILE* file = fopen("mystory.txt", "rt");
	char str[30];
	while (fgets(str, sizeof(str), file) != NULL)
		printf("%s", str);
	
	fclose(file);
}