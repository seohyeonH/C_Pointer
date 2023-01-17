#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[] = "Good time";

	//printf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++) printf("%c", arr[i]);
	return 0;
}