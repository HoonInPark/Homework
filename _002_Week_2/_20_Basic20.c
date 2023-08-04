#include <stdio.h>

void main() {
	int total = 1;
	for (int i = 1; i <= 10; i++)
	{
		total *= i;
	}
	printf("%d", total);
}