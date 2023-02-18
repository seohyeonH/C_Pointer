#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	// 문제 1
	char* str = NULL;
	int max, len;
	printf("문자열의 최대길이는? ");
	scanf("%d", &max);

	str = (char*)malloc(max * sizeof(char));
	if (str == NULL) exit(1);
	getchar();
	printf("문자열: ");
	gets(str, max+1);

	len = strlen(str);
	for (int i = 0; i < len; i++)
		printf("%c", str[len - 1 - i]);

	free(str);
	
	
	// 문제 2
	int num = 0, count = 0;
	int start = 5;
	int* heap;
	heap = (int*)malloc(sizeof(int) * start);
	if (heap == NULL) exit(1);

	do {
		scanf("%d", &num);
		if (num == -1) break;

		heap[count++] = num;
		
		if (start = count + 1) {
			start += 3;
			heap = (int*)realloc(heap, sizeof(int) * start);
		}
	} while (1);

	for (int i = 0; i < count; i++) printf("%d ", heap[i]);
	free(heap);
}
