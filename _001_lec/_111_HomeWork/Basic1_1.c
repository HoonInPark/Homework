#include "stdio.h"

void main()
{
	int a, b;

	printf("첫번째 숫자를 입력하세요 :");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하세요 :");
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("%d가 큰 숫자입니다.", a);
	}
	else
		printf("%d가 큰 숫자입니다.", b);
}