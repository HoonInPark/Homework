#include "stdio.h"

void main() {
	int money;

	printf("Insert money >> ");
	scanf_s("%d", &money);

	// 50000 10000 5000 1000 500 100 50 10
	int measurement = 100000;
	int Jang;
	while (money > 10)
	{
		measurement /= 2;
		Jang = money / measurement;
		money %= measurement;
		printf("\n%d원권 %d장", measurement, Jang);

		measurement /= 5;
		Jang = money / measurement;
		money %= measurement;
		printf("\n%d원권 %d장", measurement, Jang);
	}
	printf("\n%d원권 %d", 1, money);
}