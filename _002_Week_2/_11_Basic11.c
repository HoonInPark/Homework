#include <stdio.h>

void main() {
	int i = 1, num = 0;

	for (; i <= 10; i++) {
		num += i;
	}
	printf("%d", num);
}