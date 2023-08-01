#include <stdio.h>

void main() {
	int i = 101;

	while (i > 1) {
		i -= 1;
		if (i % 2 == 1) {
			printf("%d\n", i);
		}
	}
}