#include <stdio.h>

/*6. 2���� ������ �Է¹ް� ū ���� ��ȯ�ϴ� �޼����
   ���� ���� ��ȯ�ϴ� �޼��带 �ۼ��ϰ� ����ϼ���  */

int BigOne(int input1 , int input2)
{
	return input1 > input2 ? input1 : input2;
}

int SmallOne(int input1, int input2)
{
	return input1 < input2 ? input1 : input2;
}

void main() {
	int input1, input2;

	printf("2���� ������ �Է��ϼ��� >> ");
	scanf_s("%d %d", &input1, &input2);

	printf("ū ���� : %d\n", BigOne(input1, input2));
	printf("���� ���� : %d\n", SmallOne(input1, input2));
}