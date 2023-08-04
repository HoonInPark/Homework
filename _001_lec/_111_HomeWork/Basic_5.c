#include "stdio.h"

void main()
{
	int i = 1;
	while (i <= 10)
	{
		if (0 == i % 2)
		{
			printf("%d\n", i);
		}
		i++;
	}
}