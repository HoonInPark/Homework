#include <stdio.h>

int main()
{
	int i = 1, num = 0;

	printf("[출력할 구구단을 입력하세요.]\n -> ");
	scanf_s("%d", &num);

	do
	{
		printf("[%d * %d = %d]\n", num, i, num * i);
		i++;
	} while (i < 10);

	return 0;
}
