#include "stdio.h"

void main() {
	double d0 = 3.4;
	double d2 = 2.0;
	int res0 = d0 * d2;
	int res2 = (int)d0 * (int)d2;

	printf("res0 = %d, res2 = %d\n", res0, res2);
}