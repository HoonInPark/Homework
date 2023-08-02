#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	for (;;)
	{
		printf("[정수를 입력하세요.]\n -> ");
		scanf_s("%d", &num);

		if (num == 0)
		{
			break;
		}

		total += num;
	}

	printf("[total : %d]\n", total);
}
