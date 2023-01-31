#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void) {
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5, num6 = 6, num7 = 7;
	int* arr1[5] = { &num1, &num2, &num3, &num4, &num5 };
	int* arr2[3][5] = { &num1, &num2, &num3, &num4, &num5 , &num6, &num7};

	int** ptr1 = arr1;  // *(ptr + 0) == &num1 -> **(ptr + 0) = num1
	int*(*ptr2)[5] = arr2;
	// ���� ���̰� 5�� int�� 2���� �迭�� ����Ű�� ������ ������� (*ptr)[5]�̰�,
	// �� ���������� ���� ���̰� 5�� int�� 2���� �����͹迭�� ����Ű�� �����ͺ����� �����ؾ��ϹǷ� *(*ptr2)[5]��� ����.
	
	for (int i = 0; i < 5; i++) printf("%d ", **(ptr1 + i)); 
	// *(ptr + i) == ptr[i] == &arr1[i]
	// **(ptr + i) == arr1[i]

	for (int i = 0; i < 5; i++) printf("%d ", **(*(ptr2 + 0) + i));   
	// *(*(ptr2 + 0) + i) == ptr2[0][i] == *(ptr2[0] + i) == (*(ptr2 + 0))[i] = &arr2[0][i]
	// **(*(ptr2 + 0) + i) == arr2[0][i]
}