#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &want);

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	} while (i <= want
		);
}