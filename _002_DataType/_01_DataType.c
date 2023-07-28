#include "stdio.h"

void main()
{
	int a, b, c;
	a = 10;
	b = 20;
	c = 30;

	printf("10진수 %d %d %d\n", a, b, c);
	printf("16진수 %x %x %x\n", a, b, c);
	printf("16진수 %#x %#x %#x\n", a, b, c);
	printf("16진수 %#o %#o %#o\n", a, b, c);
}