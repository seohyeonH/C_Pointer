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
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d + %d + %d = %d\n", a, b, c, PLUS(a, b, c));
	printf("%d * %d * %d = %d\n", a, b, c, MULTI(a, b, c));

	// 2
	double rad;
	printf("\n���� ������ �Է�: ");
	scanf("%lf", &rad);

	printf("���� ���� : %f\n", AREA(rad));

	// 3
	int num1, num2;
	printf("\n�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	printf("%d�� �� Ů�ϴ�.", MAX(num1, num2));
}