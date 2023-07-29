#include <stdio.h>

void main() {
	int i = 1;

	while (1) {
		printf("%d\n", i++);
		if (i > 100)
			break;
	}
		
}