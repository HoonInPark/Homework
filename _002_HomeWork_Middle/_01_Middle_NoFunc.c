#include <stdio.h>

//�� ���� �Է¹ް� �ּҰ������ ���ϼ���. ���а����� �������Ұ�.............

void main() {
	int input1, input2;
	int price1 = 0;
	int price2 = 1;
	int i = 1;
	int j = 1;
	printf("�� ������ �Է��ϼ��� >> ");
	scanf_s("%d %d", &input1, &input2);

	while (1)
	{
		if (price1 == price2)
		{
			printf("�� ���� �ּҰ������ %d �Դϴ�.", price1);
			break;
		}
		else if (price1 < price2) {
			price1 = input1 * i++;
		}
		else if (price2 < price1)
		{
			price2 = input2 * j++;
		}
	}

}