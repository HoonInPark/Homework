#include "stdio.h"

void main() {
	int num;
	
	printf("Insert num >> ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}