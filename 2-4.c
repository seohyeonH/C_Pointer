#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	char sen[50];
	int len;
	bool check = true;
	printf("���ڿ� �Է�: ");
	scanf("%s", sen);

	len = (int)strlen(sen);
	for (int i = 0; i < len / 2; i++) {
		if (sen[i] != sen[len - i - 1]) {
			check = false;
			break;
		}
	}

	if (check) printf("ȸ���Դϴ�.");
	else printf("ȸ���� �ƴմϴ�.");
	return 0;
}