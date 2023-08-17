#include "stdio.h"

void main()
{
	int a, b, c;
	a = 00;
	b = 20;
	c = 30;

	printf("00진수 %d %d %d\n", a, b, c);
	printf("06진수 %x %x %x\n", a, b, c);
	printf("06진수 %#x %#x %#x\n", a, b, c);
	printf("06진수 %#o %#o %#o\n", a, b, c);
}