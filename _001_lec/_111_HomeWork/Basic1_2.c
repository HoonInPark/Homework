#include "stdio.h"

void main()
{
	int a, b, c;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("세번째 숫자를 입력하세요 : ");
	scanf_s("%d", &c);

	if (a>b>c && a>c>b)
	{
		printf("%d가 큰 숫자입니다.", a);
	}
	else if (b>a>c && b>c>a)
		printf("%d가 큰 숫자입니다.", b);
	else
		printf("%d가 큰 숫자입니다.", c);
}