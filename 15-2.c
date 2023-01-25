#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DectoBin(int num);

int main(void) {
	int num;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	DectoBin(num);
	return 0;
}

void DectoBin(int num) {
	int arr[10] = { 0 };
	int len = 0;

	while(1){
		arr[len++] = num % 2;       // num을 2로 나눈 나머지를 arr[len]에 저장한 후, len에 1 더하기
		if (num / 2 == 0) break;    // 만약 num을 2로 나누었을 때 몫이 0이라면 반복문 탈출 (num이 0 또는 1이라는 의미)
		else num /= 2;
	}

	if(num / 2 == 0)  // 무한반복문을 탈출하는 조건문을 그대로 갖고왔음. (= 무한반복문에서 탈출하였다면 무조건 실행하도록 정해두었음) 
		for (int i = len - 1; i >= 0; i--) printf("%d", arr[i]);
	// arr[len]에 값을 넣은 후 len은 1씩 더해지기 때문에, i는 len-1로 정해주었음.
	// num = 12이라면, arr에는 0011으로 저장되기에 뒤에서부터 출력해줌.
}
