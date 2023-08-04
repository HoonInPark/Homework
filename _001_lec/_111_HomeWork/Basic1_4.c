#include "stdio.h"

void main()
{
	int i;
	printf("숫자를 입력하세요 :");
	scanf_s("%d", &i);

	if (i > 0)
	{
		printf("입력하신 숫자의 절대값은 %d 입니다.\n", i);
	}
	else
	{
		printf("입력하신 숫자의 절대값은 %d 입니다.\n", i*(-1));
	}
}