#include <stdio.h>

/*1. �� ���� �Է¹ް� �ּҰ������ ���ϼ���.*/

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

	printf("�� ���� �Է��ϼ��� >> ");
	scanf_s("%d %d", &input1, &input2);

	printf("�� ���� �ּҰ������ %d", LeastCommonMultiple(input1, input2));
}