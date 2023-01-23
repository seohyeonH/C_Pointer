#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowAllData(const int* arr, int len){
	int i;
	for(i = 0;i < len;i++) printf("%d ", arr[i]);
}
// arr이 가리키는 값을 바꾸지 않기 위해 사용하였으며,
// 값이 변경되지 않으므로 코드의 안정성을 위해 const를 선언하였다.

void ShowData(const int* ptr) {
	int* rptr = ptr;  // rptr도 const여야함
	printf("%d \n", *rptr);
	*rptr = 20;
	printf("%d \n", *rptr);
}
// ptr이 가리키고 있는 값의 변경이 불가능하도록 const를 선언하였음.
// 하지만 const로 선언하지 않은 포인터변수에 대입하였으므로 const 선언은 무의미함.
