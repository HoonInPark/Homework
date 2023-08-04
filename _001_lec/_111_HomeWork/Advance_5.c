#include "stdio.h"

void main()
{
	int i, j;
	char c;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &i);



	for (i; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("o");
		}
		printf("\n");
	}
}