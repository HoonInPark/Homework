#include "stdio.h"

void main()
{
	int won, i;
	printf("원하는 숫자를 입력하세요 : ");
	scanf_s("%d", &won);

	for (i = 1; i <= won; i++)
	{
		printf("*");
	}
}