#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	char sen[50];
	int len;
	bool check = true;
	printf("문자열 입력: ");
	scanf("%s", sen);

	len = (int)strlen(sen);
	for (int i = 0; i < len / 2; i++) {
		if (sen[i] != sen[len - i - 1]) {
			check = false;
			break;
		}
	}

	if (check) printf("회문입니다.");
	else printf("회문이 아닙니다.");
	return 0;
}