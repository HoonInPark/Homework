#include "stdio.h"

void main()
{
	int i;

	printf("원하는 숫자를 입력하세요 : ");
	scanf_s("%d", &i);

	for (i;i > 0;i--)
	{
		printf("감사합니다.\n");
	}
}