#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	/*char* str = NULL;
	int max, len;
	printf("���ڿ��� �ִ���̴�? ");
	scanf("%d", &max);

	str = (char*)malloc(max * sizeof(char));
	if (str == NULL) exit(1);
	getchar();
	printf("���ڿ�: ");
	gets(str, max+1);

	len = strlen(str);
	for (int i = 0; i < len; i++)
		printf("%c", str[len - 1 - i]);

	free(str);
	*/

	int num = 0, count = 0;
	int start = 5;
	int* heap;
	heap = (int*)malloc(sizeof(int) * start);
	if (heap == NULL) exit(1);

	do {
		scanf("%d", &num);
		if (num == -1) break;

		heap[count++] = num;
	
		printf("%d", count);

		if (start = count + 1) {
			start += 3;
			heap = (int*)realloc(heap, sizeof(int) * start);
		}
	} while (1);

	for (int i = 0; i < count; i++) printf("%d ", heap[i]);
	free(heap);
}

// ���� �޸� ����: num1 = 20 -> n = 20 -> num2 = 21 -> n = 21 -> num3 = 22
// ���� �޸� �Ҹ�: num3 = 22 & n = 21 -> num2 = 21 & n = 20 -> num1 = 20 (return 0)