#include <stdio.h>

int main()
{
	int num[10]{};

	for (int i = 0; i < 10; i++)
	{
		printf("[%d번째 수를 입력하세요.]\n -> ", i + 1);
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0 || num[i] % 3 == 0)
		{
			printf("%d ", num[i]);
		}
	}

	return 0;
}
