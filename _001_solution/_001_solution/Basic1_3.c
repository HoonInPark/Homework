#include "stdio.h"

void main() {
	double Num1;
	double Num2;

	char arithmatic;

	printf("Type Double1... >> ");
	scanf_s("%lf", &Num1);
	printf("Type Double2... >> ");
	scanf_s("%lf", &Num2);
	printf("What do you wanna calculate? >> ");
	scanf_s(" %c", &arithmatic, sizeof(arithmatic));

	switch (arithmatic)
	{
	case '+':
		printf("result is %lf", Num1 + Num2);
		break;
	case '-':
		printf("result is %lf", Num1 - Num2);
		break;	
	case '*':
		printf("result is %lf", Num1 * Num2);
		break;	
	case '/':
		printf("result is %lf", Num1 / Num2);
		break;
	default:
		printf("It is not an arithmatic keyword!");
		break;
	}
}