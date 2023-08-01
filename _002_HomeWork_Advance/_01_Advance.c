#include <stdio.h>

/*1. 두 수를 입력받고 최소공배수를 구하세요.*/

int LeastCommonMultiple(int input1, int input2) {
	int price1 = input1;
	int price2 = input2;
	int i = 1;
	int j = 1;
	while(1)
	{
		if (price1 == price2)
		{
			return price1;
			break;
		}
		else if (price1 < price2)
		{
			price1 = input1 * i++;
		}
		else if (price2 < price1)
		{
			price2 = input2 * j++;
		}
	}
}

void main()
{
	int input1, input2;

	printf("두 수를 입력하세요 >> ");
	scanf_s("%d %d", &input1, &input2);

	printf("두 수의 최소공배수는 %d", LeastCommonMultiple(input1, input2));
}