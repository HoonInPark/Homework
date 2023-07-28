#include "stdio.h"

void main() {
	int Jeong_Su1;
	int Jeong_Su2;

	printf("Type Decimal... >> ");
	scanf_s("%d", &Jeong_Su1);
	printf("Type Decimal... >> ");
	scanf_s("%d", &Jeong_Su2);

	if (Jeong_Su1 > Jeong_Su2)
	{
		printf("%d", Jeong_Su1);
	}
	else if (Jeong_Su1 < Jeong_Su2)
	{
		printf("%d", Jeong_Su2);
	}
	else
	{
		printf("They Have Same Values!");
	}
}