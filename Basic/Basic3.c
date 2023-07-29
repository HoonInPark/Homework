#include <stdio.h>

void main() {
		int i = 10;

		while (10) {
			printf("%d\n", i++);
			if (i > 20)
				break;
		}
}