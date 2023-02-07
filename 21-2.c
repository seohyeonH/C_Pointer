#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

int checkBlank(char* sen1, char* sen2);  // 문제 3

int main(void) {
	// 문제 1
	int sum = 0;
	char str[SIZE];
	gets_s(str, SIZE);

	for (int i = 0; i < strlen(str); i++)
		if (str[i] >= '1' && str[i] <= '9') sum += (str[i] + 1 - '1');

	printf("아라비아 숫자의 합은 %d입니다. \n", sum);


	// 문제 2
	int len;
	char str1[20], str2[20], str3[40];
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	len = (int)strlen(str1);
	str1[len - 1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("%s", str3);

	
	// 문제 3
	char sen1[SIZE], sen2[SIZE];
	int res = 0, age1 = 0, age2 = 0;
	int check;
	gets_s(sen1, SIZE);
	gets_s(sen2, SIZE);

	check = checkBlank(sen1, sen2);
	if(check == -1) printf("이름과 나이가 동일하지 않습니다.\n");
	else {
		res = strncmp(sen1, sen2, check); // 이름 비교			
		age1 = atoi(&sen1[check + 1]);    // user1 나이
		age2 = atoi(&sen2[check + 1]);    // user2 나이

		if (res == 0) printf("이름이 동일합니다.\n");
		else printf("이름이 틀립니다.\n");

		if (age1 == age2) printf("나이가 같습니다.\n");
		else printf("나이가 틀립니다.\n");
	}
}

int checkBlank(char* sen1, char* sen2) {
	int len1, len2;
	int p1 = 0, p2 = 0;
	len1 = (int)strlen(sen1);
	len2 = (int)strlen(sen2);
	
	for (int i = 0; i < len1; i++) {
		if (sen1[i] == ' ') p1 = i;
		if (sen2[i] == ' ') p2 = i;
	}
	if (p1 == p2) return p1;
	else return -1;
}
