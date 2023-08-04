#include <stdio.h>

void main()
{
	int i, j=1;

	for (i = 1; i <= 10; i++)
	{
		j *= i;
	}
	printf("1부터 10까지의 곱은 %d 입니다.", j);
}