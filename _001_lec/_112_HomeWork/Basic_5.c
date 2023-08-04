#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("원하시는 숫자를 입력하세요 : ");
	scanf_s("%d", &want);

	do
	{
		if (want < 0)
		{
			printf("음수를 입력하셨습니다.\n");
			main();
		}
		else
		{
			printf("감사합니다.\n");
			i++;
		}
		
	} while (i <= want);
}