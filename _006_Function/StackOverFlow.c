#include <stdio.h>

void stackOverflow(int num)
{
	printf("%d", num);

	return stackOverflow(num);
}

void main() {
	int num = 0;

	stackOverflow(num);
}