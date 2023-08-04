#include "stdio.h"

void main()
{
	int i, j, won;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &won);

	for (i=1; i<=won; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}