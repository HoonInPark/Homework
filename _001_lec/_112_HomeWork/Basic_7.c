#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &want);

	do
	{
		printf("%d x %d = %d \n", want, i, i * want);
		i++;
	} while (i <= 9);
}