#include "stdio.h"

// ������ ���� ȸ���� ������� "��"�� �ݺ����� �Է¹ް� ����ϼ���.

void main() {
	int count = 0;
	int koong = 0;

	printf("������ ���� Ƚ���� �Է��ϼ��� >> : ");
	scanf_s("%d", &count);
	printf("������� �� �� �ݺ����� �Է��ϼ��� >> : ");
	scanf_s("%d", &koong);
	if (count == 0)
	{
		printf("������ 0 �� ������ϴ�.");
	}
	else
	{
		for (int i = 0; i <= count; i++)
		{
			if (i % koong == 0)
			{
				printf("��\n");
			}
			else
			{
				printf("������ %d �� ������ϴ�.\n", i);
			}
		}
	}
}