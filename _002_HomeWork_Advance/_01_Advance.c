#include <stdio.h>

/*0. �� ���� �Է¹ް� �ּҰ������ ���ϼ���.*/

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

	printf("�� ���� �Է��ϼ��� >> ");
	scanf_s("%d %d", &input0, &input2);

	printf("�� ���� �ּҰ������ %d", LeastCommonMultiple(input0, input2));
}