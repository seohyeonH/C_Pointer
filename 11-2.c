#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// ���� 1
	printf("Question 11-2.1\n");
	
	int len = 0;
	char arr[10];
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;
	printf("���ܾ��� ���� : %d", len);
	


	// ���� 2
	printf("Question 11-2.2\n");
	
	int len = 0;
	char arr[10], temp;
	scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) len++;
	
	for (int i = 0; i < len / 2; i++) {
		temp = arr[len - i - 1];
		arr[len - i - 1] = arr[i];
		arr[i] = temp;
	}
	
	printf("���� ���ڿ� ���: %s", arr);



	// ���� 3
	printf("Question 11-2.3\n");
	
	int max;
	char arr[10];
	scanf("%s", arr);

	max = arr[0];
	for (int i = 0; arr[i] != '\0'; i++)
		if (max < arr[i]) max = arr[i];

	printf("�ƽ�Ű �ڵ� ���� ���� ū ���� : %c", max);
}