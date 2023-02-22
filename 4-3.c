#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct complexnum {
	double real;
	double imaginary;
} CNum;

CNum* Plus(CNum num1, CNum num2) {
	CNum *res;
	res = (CNum*)malloc(sizeof(CNum));

	res->real = num1.real + num2.real;
	res->imaginary = num1.imaginary + num2.imaginary;

	return res;
}

CNum* Multiple(CNum num1, CNum num2) {
	CNum* res;
	res = (CNum*)malloc(sizeof(CNum));

	res->real = num1.real * num2.real - num1.imaginary * num2.imaginary;
	res->imaginary = num1.imaginary * num2.real + num1.real * num2.imaginary;

	return res;
}

int main(void) {
	CNum num1, num2;
	CNum* plus, * multiple;

	printf("복소수 입력1[실수 허수]: ");
	scanf("%lf %lf", &num1.real, &num1.imaginary);
	printf("복소수 입력1[실수 허수]: ");
	scanf("%lf %lf", &num2.real, &num2.imaginary);

	plus = Plus(num1, num2);
	multiple = Multiple(num1, num2);

	printf("합의 결과] 실수: %06f, 허수: %06f\n", plus->real, plus->imaginary);
	printf("곱의 결과] 실수: %06f, 허수: %06f\n", multiple->real, multiple->imaginary);

	free(plus);
	free(multiple);
}