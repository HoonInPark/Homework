#include "stdio.h"

//���� ������ �Է��ϸ� �� ������ ����ŭ�� asterisk(*) �� ����Ͻÿ�.

void main() {
	int input = 0;

here:
	printf("���� ������ �Է��ϼ��� >> : ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		for (int i = 0; i <= input; i++)
		{
			for (int p = 0; p < i; p++)
			{
				printf("\*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("���� ������ �Է����ּ���!!");
		goto here;
	}
}