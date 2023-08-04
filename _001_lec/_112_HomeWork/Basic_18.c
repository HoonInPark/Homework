#include <stdio.h>

void main()
{
	int ARR[10];
	int i, sum=0;

	for (i = 0; i < 10; i++)
	{
		printf("원하는 %d번째 수를 입력하세요 : ", i+1);
		scanf_s("%d", &ARR[i]);
		sum += ARR[i];
	}

		printf("배열의 총 합은 %d입니다.\n", sum);
}