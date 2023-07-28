#include "stdio.h"

void main() {
	int num1;
	int num2;

	printf("Insert 1st integer >> ");
	scanf_s("%d", &num1);
	printf("Insert 2nd integer >> ");
	scanf_s("%d", &num2);

	printf("The bigger one is %s", (num1 > num2 ? "num1" : "num2"));
}