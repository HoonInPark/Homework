#include <stdio.h>

void main() {
	int i = 1, num = 0;

	do {
		num += i;
		i++;
	} while (i <= 10);
	printf("%d", num);
}