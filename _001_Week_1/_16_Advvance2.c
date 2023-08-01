#include <stdio.h>

void main() {
	int money;

	printf("금액을 입력해주세요: ");
	scanf_s("%d", &money);

	if (money >= 50000)
	{
		printf("오만원 %d매\n", money / 50000);
		money = money - 50000 * (money / 50000);
	}
	if (money >= 10000)
	{
		printf("만원 %d매\n", money / 10000);
		money = money - 10000 * (money / 10000);
	}
	if (money >= 5000)
	{
		printf("오천원 %d매\n", money / 5000);
		money = money - 5000 * (money / 5000);
	}
	if (money >= 1000)
	{
		printf("천원 %d매\n", money / 1000);
		money = money - 1000 * (money / 1000);
	}
	if (money >= 500)
	{
		printf("500원 %d개\n", money / 500);
		money = money - 500 * (money / 500);
	}
	if (money >= 100)
	{
		printf("100원 %d개\n", money / 100);
		money = money - 100 * (money / 100);
	}
	if (money >= 50)
	{
		printf("50원 %d개\n", money / 50);
		money = money - 50 * (money / 50);
	}
	if (money >= 10)
	{
		printf("10원 %d개\n", money / 10);
		money = money - 10 * (money / 10);
	}
	if (money >= 1)
	{
		printf("1원 %d개\n", money / 1);
		money = money - 1 * (money / 1);
	}
}