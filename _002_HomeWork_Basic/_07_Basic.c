#include <stdio.h>

// 7. �Է¹��� ������ �������� ����ϼ��� ���� ��� ���� 3�� �Է��ϸ� 3 6 9 12 15 18 .... 27

void main() {
	int input; 
	int i = 1;

	printf("����� �������� ���ڸ� �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0 && input < 10)
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