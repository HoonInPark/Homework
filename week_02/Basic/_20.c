#include <stdio.h>

int main()
{
	int total = 1;

	for (int i = 1; i <= 10; i++)
	{
		total *= i;
	}
	printf("[total : %d]\n", total);

	return 0;
}
