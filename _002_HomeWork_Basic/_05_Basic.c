#include <stdio.h>

// 5. ���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���

void main() {
	int input = 0;
	int i = 0;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		do
		{
			printf("�����մϴ�.\n");
			i++;
		} while (i < input);
	}
	else
	{
		printf("���� ������ �Է����ּ���!");
	}
}