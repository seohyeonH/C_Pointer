#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void MaxAndMin(int** min, int** max, int* arr);
// main�Լ����� �� �Լ��� ����� �� minPtr �����ͺ����� maxPtr�����ͺ���, arr �迭�� ����Ұ���.
// ������ ������ ����Ű�� ���������ͺ��� �� ��, �迭�� ����Ű�� �����ͺ��� �� ���� �Ű������� ����.

int main(void) {
	int arr[SIZE];
	int* maxPtr = NULL;
	int* minPtr = NULL;

	printf("�迭 �Է�: ");
	for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
	maxPtr = minPtr = &arr[0];

	MaxAndMin(&maxPtr, &minPtr, arr);   // maxPtr�� �ּҰ�, minPtr�� �ּҰ�, arr�� �ּҰ� ����.
	printf("max: %d, min: %d\n", *maxPtr, *minPtr);
}

void MaxAndMin(int** min, int** max, int* arr) {
	for (int i = 0; i < SIZE; i++) {
		if (**min > arr[i]) *min = &arr[i];
		if (**max < arr[i]) *max = &arr[i];
	}
}