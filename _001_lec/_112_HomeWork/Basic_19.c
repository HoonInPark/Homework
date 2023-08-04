#include <stdio.h>

void main()
{
	int ARR[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("원하는 %d번째 수를 입력하세요 : ", i + 1);
		scanf_s("%d", &ARR[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (ARR[i] % 2 == 0 && ARR[i] % 3 == 0 && ARR[i] != 0)
		{
			printf("%d번째 배열은 2와 3 모두의 배수 : %d\n", i + 1, ARR[i]);
		}
		else if (ARR[i] % 2 == 0 && ARR[i] != 0)
		{
			printf("%d번째 배열은 2의 배수 : %d\n", i + 1, ARR[i]);
		}
		else if (ARR[i] % 3 == 0 && ARR[i] != 0)
		{
			printf("%d번째 배열은 3의 배수 : %d\n", i + 1, ARR[i]);
		}
		else
			printf("%d번째 배열은 %d로써, 2와 3의 배수가 아닙니다.\n", i + 1, ARR[i]);;
	}
}