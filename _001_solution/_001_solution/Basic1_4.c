#include "stdio.h"

void main() {
	int num1;
	
	printf("Type integer >> ");
	scanf_s("%d", &num1);
	
	if (num1 < 0)
	{
		num1 = -num1;
	}
	
	printf("Absolute value of num1 is %d", num1);
}