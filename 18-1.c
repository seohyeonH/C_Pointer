#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SimpleFuncOne(int *arr1, int *arr2);		// 문제 2
void SimpleFunTwo(int(*arr3)[4], int(*arr4)[4]);	// 문제 2
void ComplexFuncOne(int **arr1, int *(*arr2)[5]);	// 문제 3
void ComplexFuncTwo(int ***arr3, int ***(*arr4)[5]);	// 문제 3

int main(void) {
	// 18-1.2
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);


	
	// 18-1.3
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);



	// 18-1.4
	int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	printf("%d %d \n", arr[1][0], arr[0][1]);		 // 3, 2
	printf("%d %d \n", *(arr[2] + 1), *(arr[1] + 1));	 // 6, 4
	printf("%d %d \n", (*(arr + 2))[0], (*(arr + 0))[1]);	 // 5, 2
	printf("%d %d \n", **arr, *(*(arr + 0) + 0));		 // 1, 1
	


	// 18-1.5
	int arr[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	printf("%d \n", arr[1][0][1]);
	printf("%d \n", *(arr[1][0]) + 1);
	printf("%d \n", *(*(arr[1] + 0) + 1));
	printf("%d \n", *(*(*(arr + 1) + 0) + 1));
	printf("%d \n", (*(arr[1] + 0))[1]);  // *(arr[1]+0)[1] 은 *(arr[1])[1]와 같으며 *은 괄호보다 우선순위가 낮기 때문에 arr[1][1][0]으로 작동함.
	printf("%d \n", (*(arr + 1))[0][1]);
}
