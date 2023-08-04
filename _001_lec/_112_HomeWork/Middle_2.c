#include <stdio.h>

void main()
{
	int i, sum = 0;

	for (i = 1; sum <= 1000; i++)
	{
		sum += i;
		if (sum > 1000)
			break;
	}
	printf("총 합은 %d 입니다.", sum);
	
	for (i; i >= 0; i--)
	{
		printf("더한 값은 %d 입니다.\n", i);
	}
}