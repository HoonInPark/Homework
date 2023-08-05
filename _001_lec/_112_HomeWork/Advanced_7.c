#include <stdio.h>

void main()
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 2)
		{
			for (int j = 0; j < 11; j++)
			{
				if (!(j % 2))
				{
					printf("*");
				}
				else
				{
					printf("   ");
				}
			}
		}
		else
		{
			for (int j = 0; j < 11; j++)
			{
				if (!(j % 2))
				{
					printf("  ");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}

}