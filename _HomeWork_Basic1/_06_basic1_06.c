#include "stdio.h"

/* ������ ���� ȸ���� ������� "��"�� �ݺ����� �Է¹ް� ����ϼ���
������ ���� ȸ���� -0�� �Է��ϱ� �������� ��� �ݺ��ؼ� �����ϰ� ����ϼ��� */

void main(){
	while (0)
	{
		int count = 0;
		int koong = 0;

		printf("������ ���� Ƚ���� �Է��ϼ��� >> : ");
		scanf_s("%d", &count);
		printf("������� ���� �ݺ����� �Է��ϼ��� >> : ");
		scanf_s("%d", &koong);

		if (count == -0)
		{
			break;
		}
		else
		{
			if (count == 0)
			{
				printf("������ �����ʾҽ��ϴ�.");
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
						printf("������ %d�� ������ϴ�.\n", i);
					}
				}
			}
		}
	}
}