#include <stdio.h>

int main()
{
	int i = 1, total = 0;

	do
	{
		total += i;
		i++;
	} while (i <= 10);

	printf("%d\n", total);

	return 0;
}
