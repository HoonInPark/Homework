#include "stdio.h"

// 세개의 숫자를 입력받아서 가장 큰 수를 출력하는 프로그램을 구현하라

void main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	printf("실수1를 입력하세요 >> ");
	scanf_s("%d", &num1);
	printf("실수2를 입력하세요 >> ");
	scanf_s("%d", &num2);
	printf("실수3를 입력하세요 >> ");
	scanf_s("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("세 수중 제일 큰 수는 %d 입니다.", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("세 수중 제일 큰 수는 %d 입니다.", num2);
	}
	else if (num3 > num1 && num3 > num2)
	{
		printf("세 수중 제일 큰 수는 %d 입니다.", num3);
	}
	else
	{
		printf("수를 다시 입력해주세요.");
	}
}