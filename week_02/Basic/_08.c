#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	do
	{
		printf("[정수를 입력하세요. (0 : 종료)]\n -> ");
		scanf_s("%d", &num);

		total += num;

	} while (num != 0);
	printf("[총합 : %d]\n", total);

	return 0;
}
