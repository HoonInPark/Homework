#include "stdio.h"

void main() {
	int num1;
	int num2;
	int num3;

	printf("\nInsert 1st num >> ");
	scanf_s("%d", &num1);
	printf("\nInsert 2nd num >> ");
	scanf_s("%d", &num2);
	printf("\nInsert 3rd num >> ");
	scanf_s("%d", &num3);

	printf("%d", (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3);
}