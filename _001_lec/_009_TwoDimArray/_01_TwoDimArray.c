#include <stdio.h>

void main()
{
	int kor[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			kor[i][j] = i * 5 + j;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", kor[i][j]);
		}
		printf("\n");
	}
}