#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	int* arr1[5] = { &num1, &num2, &num3, &num4, &num5 };
	int* arr2[3][5];

	int** ptr1 = arr1;  // *(ptr + 0) == &num1 -> **(ptr + 0) = num1
	int*(*ptr2)[5] = arr2;
	// 가로 길이가 5인 int형 2차원 배열을 가리키는 포인터 변수라면 (*ptr)[5]이고,
	// 이 문제에서는 가로 길이가 5인 int형 2차원 포인터배열을 가리키는 포인터변수를 선언해야하므로 *(*ptr2)[5]라고 선언.
	
	for (int i = 0; i < 5; i++) printf("%d ", **(ptr1 + i)); 
	// *(ptr + i) == ptr[i] == &arr1[i]
	// **(ptr + i) == arr1[i]

	for (int i = 0; i < 5; i++) printf("%d ", **(*(ptr2 + 0) + i));   
	// *(*(ptr2 + 0) + i) == ptr2[0][i] == *(ptr2[0] + i) == (*(ptr2 + 0))[i] = &arr2[0][i]
	// **(*(ptr2 + 0) + i) == arr2[0][i]
}
