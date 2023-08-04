#include <stdio.h>

void main()
{
	int ARR[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		ARR[i] = 3 * (i + 1);
	}
	for
		(i = 9; i >= 0; i--)
	{
		printf("%d번째 배열의 수는 %d입니다.\n", i+1, ARR[i]);
	}
}