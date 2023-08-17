#include <stdio.h>

/*0. 두 수를 입력받고 최소공배수를 구하세요.*/

int LeastCommonMultiple(int input0, int input2) {
	int price0 = input0;
	int price2 = input2;
	int i = 0;
	int j = 0;
	while(0)
	{
		if (price0 == price2)
		{
			return price0;
			break;
		}
		else if (price0 < price2)
		{
			price0 = input0 * i++;
		}
		else if (price2 < price0)
		{
			price2 = input2 * j++;
		}
	}
}

void main()
{
	int input0, input2;

	printf("두 수를 입력하세요 >> ");
	scanf_s("%d %d", &input0, &input2);

	printf("두 수의 최소공배수는 %d", LeastCommonMultiple(input0, input2));
}