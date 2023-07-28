#include "stdio.h"

// 두개의 정수를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현하라.

void main() {
	int num1 = 0;
	int num2 = 0;
	int result;

	printf("정수1을 입력하세요. >> : ");
	scanf_s("%d", &num1);
	printf("정수2을 입력하세요. >> : ");
	scanf_s("%d", &num2);

	if (num1 > num2)
	{
		printf("정수1이 정수 2보다 더 큽니다.");
	}
	else if (num2 > num1)
	{
		printf("정수2가 정수 1보다 더 큽니다.");
	}
	else
	{
		printf("숫자를 다시 입력해주세요.");
	}
}