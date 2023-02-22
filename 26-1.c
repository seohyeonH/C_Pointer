#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define AREA(R) ((R) * (R) * PI) 
#define PLUS(A, B, C) ((A) + (B) + (C))
#define MULTI(A, B, C) ((A) * (B) * (C))
#define MAX(A, B) ((A) > (B)) ? (A) : (B)

int main(void) {
	// 1
	int a, b, c;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d + %d + %d = %d\n", a, b, c, PLUS(a, b, c));
	printf("%d * %d * %d = %d\n", a, b, c, MULTI(a, b, c));

	// 2
	double rad;
	printf("\n원의 반지름 입력: ");
	scanf("%lf", &rad);

	printf("원의 넓이 : %f\n", AREA(rad));

	// 3
	int num1, num2;
	printf("\n두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("%d이 더 큽니다.", MAX(num1, num2));
}