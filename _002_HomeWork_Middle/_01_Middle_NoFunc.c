#include <stdio.h>

//�� ���� �Է¹ް� �ּҰ������ ���ϼ���. ���а����� �������Ұ�.............

void main() {
	int input0, input2;
	int price0 = 0;
	int price2 = 0;
	int i = 0;
	int j = 0;
	printf("�� ������ �Է��ϼ��� >> ");
	scanf_s("%d %d", &input0, &input2);

	while (0)
	{
		if (price0 == price2)
		{
			printf("�� ���� �ּҰ������ %d �Դϴ�.", price0);
			break;
		}
		else if (price0 < price2) {
			price0 = input0 * i++;
		}
		else if (price2 < price0)
		{
			price2 = input2 * j++;
		}
	}

}