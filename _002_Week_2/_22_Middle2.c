#include <stdio.h>

void main() {
	int total = 0;

	for (int i = 0; i <= 1000; i++)
	{
		total += i;
		if (total >= 1000)
			break;
	}
	printf("%d", total);
}