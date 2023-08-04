#include <stdio.h>

void main()
{
	int sum=0, i=1, j;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &j);

	do
	{
		sum += i;
		i++;
	} while (i <= j);

	printf("1부터 %d까지의 합은 %d 입니다", j, sum);
}