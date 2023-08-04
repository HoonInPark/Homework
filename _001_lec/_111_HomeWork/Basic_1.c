#include "stdio.h"

void main()
{
	int a, b, c, sum1 = 0, sum2 = 0;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("세번째 숫자를 입력하세요 : ");
	scanf_s("%d", &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("입력하신 숫자로 삼각형을 만들 수 있습니다.\n");
	}
	else
	{
		printf("입력하신 숫자로 삼각형을 만들 수 없습니다.\n");
	}
}