#include "stdio.h"

void main()
{
	int jik, kung, num;

	printf("나무를 찍을 횟수를 입력하세요 : ");
	scanf_s("%d", &jik);
	printf("몇번마다 쿵할지를 입력하세요 : ");
	scanf_s("%d", &kung);

	num = kung;

	while (jik > 0)
	{
		if (num > 0)
		{
			printf("찍\n");
			num--;
		}
		else
		{
			printf("쿵\n");
			num = kung;
		}
		jik--;
	}
}