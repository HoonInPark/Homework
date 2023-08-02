#include <stdio.h>

int main()
{
	int num[10]{}, total = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("[정수를 입력하세요.]\n -> ");
		scanf_s("%d", &num[i]);

		total += num[i];
	}
	printf("[total : %d]\n", total);

	return 0;
}
