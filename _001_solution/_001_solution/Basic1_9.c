#include "stdio.h"

void main() {
	int num;
	
	printf("Insert num >> ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", (i + 1) * 3);
	}
}