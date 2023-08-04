#include "stdio.h"

void main()
{
	int i,j;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &i);
	
	for (j=1 ; i > 0 ; j++)
	{
		printf("%d\n", j * 3);
		i--;
	}
}