#include <stdio.h>

void main() {
	int n;

	printf("number? ");
	scanf_s("%d", &n);

	if (n >= 0) printf("absolute value: %d", n);
	else printf("absolute value: %d", -n);
}