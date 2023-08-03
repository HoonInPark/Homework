#include <stdio.h>

int main()
{
	int num = 0;

	printf("[양의 정수를 입력하세요.]\n -> ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		for (int i = 1; i <= num; i++)
		{
			printf("%d ", i * 5);
		}
	}

	return 0;
}
