#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = fopen("mystory.txt", "wt");
	
	fputs("#�̸�: ȫ����\n", fp);
	fputs("#�ֹι�ȣ: 010928-4200223\n", fp);
	fputs("#��ȭ��ȣ: 01099753084\n", fp);
	fputs("#��ܸԴ� ����: «��, ������\n", fp);
	fputs("#���: �౸\n", fp);

	fclose(fp);

	FILE* file = fopen("mystory.txt", "rt");
	char str[30];
	while (fgets(str, sizeof(str), file) != NULL)
		printf("%s", str);
	
	fclose(file);
}