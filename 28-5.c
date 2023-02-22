#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	char str1[100], str2[100];
	int ret1, ret2;
	bool res = true;

	FILE* fp1 = fopen("d1.txt", "rt");
	FILE* fp2 = fopen("d2.txt", "rt");

	while (1) {
		ret1 = fscanf(fp1, "%s", str1);
		ret2 = fscanf(fp2, "%s", str2);
		if (ret1 == EOF || ret2 == EOF) break;

		if (strcmp(str1, str2) != 0) {
			res = false; break;
		}
	}

	printf("C: d1.txt d2.txt\n");
	if (res) printf("두 개의 파일은 완전히 일치합니다.");
	else printf("두 개의 파일은 불일치합니다.");

	fclose(fp1);
	fclose(fp2);
}
