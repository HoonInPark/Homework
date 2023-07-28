#include "stdio.h"

void main() {
	
	int num_added = 0;
	int num_adding = 1;

	while (num_adding)
	{
		printf("Insert number >> ");
		scanf_s("%d", &num_adding);
		
		num_added += num_adding;
	}

	printf("%d", num_added);
}