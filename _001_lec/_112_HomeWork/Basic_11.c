#include <stdio.h>

void main()
{

	int i = 1, sum=0;
	for (i; i <= 10; i++)
	{
		sum += i;
	}
	printf("1부터 10까지의 총 합은 %d입니다.\n", sum);
}