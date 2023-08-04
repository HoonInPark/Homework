#include "stdio.h"

void main() {
	int a = 10;
	int b = 20;
	int c = 30;

	printf("10진수 %d %d %d\n", a, b, c);
	printf("16진수 %x %x %x \n", a, b, c);
	printf("16진수 %#x %#x %#x \n", a, b, c);
	printf("16진수 %#o %#o %#o \n", a, b, c);
}