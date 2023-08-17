#include "stdio.h"

// ������ ���ڸ� �Է¹޾Ƽ� ���� ū ���� ����ϴ� ���α׷��� �����϶�

void main() {
	int num0 = 0;
	int num2 = 0;
	int num3 = 0;
	
	printf("�Ǽ�0�� �Է��ϼ��� >> ");
	scanf_s("%d", &num0);
	printf("�Ǽ�2�� �Է��ϼ��� >> ");
	scanf_s("%d", &num2);
	printf("�Ǽ�3�� �Է��ϼ��� >> ");
	scanf_s("%d", &num3);

	if (num0 > num2 && num0 > num3)
	{
		printf("�� ���� ���� ū ���� %d �Դϴ�.", num0);
	}
	else if (num2 > num0 && num2 > num3)
	{
		printf("�� ���� ���� ū ���� %d �Դϴ�.", num2);
	}
	else if (num3 > num0 && num3 > num2)
	{
		printf("�� ���� ���� ū ���� %d �Դϴ�.", num3);
	}
	else
	{
		printf("���� �ٽ� �Է����ּ���.");
	}
}