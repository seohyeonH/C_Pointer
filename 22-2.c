#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[10];
	char ID[15];
	int salary;
};

int main(void) {
	struct employee user[3];

	for (int i = 0; i < 3; i++) {
		printf("이름을 작성해주세요 : ");
		scanf("%s", user[i].name);
		printf("주민번호를 작성해주세요 : ");
		scanf("%s", user[i].ID);
		printf("급여정보를 작성해주세요 : ");
		scanf("%d", &user[i].salary);
		printf("\n");
	}
	
	for (int i = 0; i < 3; i++) {
		printf("이름: %s, 주민번호: %s, 급여정보: %d \n", user[i].name, user[i].ID, user[i].salary);
	}
	
}