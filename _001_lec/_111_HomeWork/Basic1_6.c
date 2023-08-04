#include "stdio.h"

void main()
{
	int jik;

	printf("나무를 찍을 횟수를 입력하세요 : ");
	scanf_s("%d", &jik);

	while (-1 != jik)
	{
		printf("들어올땐 마음대로지만 나갈때는 아니란다.\n");
		printf("나무를 찍을 횟수를 입력하세요 : ");
		scanf_s("%d", &jik);
	}
}