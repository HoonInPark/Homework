#include <stdio.h>

void main() {
	double num1;
	double num2;
	
	char operator;

	printf("Insert 1st number ...>> ");
	scanf_s("%lf", &num1);
	printf("Insert 2st number ...>> ");
	scanf_s("%lf", &num2);

	printf("What kind of operation do you want? >> ");
	scanf_s(" %c", &operator, sizeof(operator));

	switch (operator)
	{
	case '+':
		printf("%lf + %lf = %lf", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%lf - %lf = %lf", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%lf * %lf = %lf", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%lf / %lf = %lf", num1, num2, num1 / num2);
		break;
	default:
		printf("%c is not an operator!!!", operator);
		break;
	}
}