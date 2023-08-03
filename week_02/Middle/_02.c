#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	while (total <= 1000)
	{
		total += num;
		num++;
	}
	printf("[총합 : %d / 더한 값 : %d]\n", total, num);

	return 0;
}
