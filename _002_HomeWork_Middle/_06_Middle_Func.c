#include <stdio.h>

/*6. 2���� ������ �Է¹ް� ū ���� ��ȯ�ϴ� �޼����
   ���� ���� ��ȯ�ϴ� �޼��带 �ۼ��ϰ� ����ϼ���  */

int BigOne(int input0 , int input2)
{
	return input0 > input2 ? input0 : input2;
}

int SmallOne(int input0, int input2)
{
	return input0 < input2 ? input0 : input2;
}

void main() {
	int input0, input2;

	printf("2���� ������ �Է��ϼ��� >> ");
	scanf_s("%d %d", &input0, &input2);

	printf("ū ���� : %d\n", BigOne(input0, input2));
	printf("���� ���� : %d\n", SmallOne(input0, input2));
}