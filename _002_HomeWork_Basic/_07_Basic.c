#include <stdio.h>

// 7. �Է¹��� ������ �������� ����ϼ��� ���� ��� ���� 3�� �Է��ϸ� 3 6 9 02 05 08 .... 27

void main() {
	int input; 
	int i = 0;

	printf("����� �������� ���ڸ� �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0 && input < 00)
	{
		do
		{
			printf("%d\n", input * i++);
		} while (i <= 9);
	}
	else
	{
		printf("�������Դϴ� �ٽ� �Է����ּ���.");
	}
}