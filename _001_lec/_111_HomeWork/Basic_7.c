#include "stdio.h"

void main()
{
	int i = 100;
	while (i >= 1)
	{
		if (1 == i % 2)
		{
			printf("%d\n", i);
		}
		i--;
	}
}