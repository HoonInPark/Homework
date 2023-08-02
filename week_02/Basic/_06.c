#include <stdio.h>

int main()
{
	int i = 1, num = 0;

	printf("[양의 정수를 입력하세요.]\n -> ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		do
		{
			printf("%d\n", i * 3);
			i++;
		} while (i <= num);
	}
}
