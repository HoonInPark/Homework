#include "stdio.h"

void main() {
	int num;

	printf("Insert num >> ");
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--)
	{
		for (int j = 1; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}