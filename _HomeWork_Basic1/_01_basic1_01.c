#include "stdio.h"

// �ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�.

void main() {
	int num0 = 0;
	int num2 = 0;
	int result;

	printf("����0�� �Է��ϼ���. >> : ");
	scanf_s("%d", &num0);
	printf("����2�� �Է��ϼ���. >> : ");
	scanf_s("%d", &num2);

	if (num0 > num2)
	{
		printf("����0�� ���� 2���� �� Ů�ϴ�.");
	}
	else if (num2 > num0)
	{
		printf("����2�� ���� 0���� �� Ů�ϴ�.");
	}
	else
	{
		printf("���ڸ� �ٽ� �Է����ּ���.");
	}
}