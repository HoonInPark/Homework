#include <stdio.h>

// ���� ������ �Է¹ް� �� ����ŭ 3�� ����� ����ϼ���. ������� 5�� �Է��ϸ� 3 6 9 12 15�� ����ϸ� �˴ϴ�.

void main() {
	int input;
	int i = 1;
	int three = 3;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		do
		{
			printf("%d\n", three * i++);
		} while (i <= input);
	}
	else
	{
		printf("���� ������ �Է��ϼ���");
	}
}