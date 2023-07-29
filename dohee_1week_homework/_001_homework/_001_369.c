#include <stdio.h>


int main()
{
	int i,
		num,
		check;

	for (i = 1; i <= 50; i++)
	{
		num = i;

		do
		{
			check = num % 10;
			if (check && (check % 3) == 0) break;

		}

		while (num = num / 10);

		if (num) printf("¦");
		else printf("%3d", i);

		if ((i % 10) == 0)printf("\n");



	}

	printf("\n");
	return 0;
}