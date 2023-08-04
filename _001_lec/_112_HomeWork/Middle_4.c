#include <stdio.h>

void main()
{
	int i, want;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &want);

	for (i=9; i > 0; i--)
	{
		printf("%d x %d = %d \n", want, i, i * want);
	}

}