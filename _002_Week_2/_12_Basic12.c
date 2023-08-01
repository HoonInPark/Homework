#include <stdio.h>

void main() {
	int i = 1;

	for (; i <= 10; i++) {
		if (i % 2 == 0) 
		{
			printf("%d\n", i);
		}
	}
}