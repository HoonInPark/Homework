#include <stdio.h>

// 03. ���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���

void main() {
	int input;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		for (int i = 0; i < input; i++)
		{
			printf("�����մϴ�.\n");
		}
	}
	else
	{
		printf("���� ������ �Է��ϼ���.");
	}
}