#include <stdio.h>

int main(void) {
	// 문제 1
	printf("Question 12-1.1\n");
	
	int num = 10;
	int *ptr1 = &num;    // 포인터변수 ptr1은 num의 주소를 가리킴.
	int *ptr2 = &num;    // 포인터변수 ptr2은 num의 주소를 가리킴
	
	(*ptr1)++;   // ptr1이 가리키고 있는 곳의 값(=num)에 1 더하기
	(*ptr2)++;   // ptr2가 가리키고 있는 곳의 값(=num)에 1 더하기
	printf("%d \n", num);   // num = 12
	
	

	// 문제 2
	printf("Question 12-1.2\n");
	
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;     // (*ptr1) = 10
	int* ptr2 = &num2;     // (*ptr2) = 20

	(*ptr1) += 10;  // num1(=*ptr1) = 20
	(*ptr2) -= 10;  // num2(=*ptr2) = 10

	ptr1 = &num2;   // ptr1이 가리키는 곳을 num2의 주소로 바꿔줌.
  	ptr2 = &num1;   // ptr2이 가리키는 곳을 num1의 주소로 바꿔줌.

	printf("%d %d \n", *ptr1, *ptr2);
}
