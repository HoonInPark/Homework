#include "stdio.h"

// ������ �Է¹ް� ���밪�� ���϶�( -5, 5 => 5) 

int main() {

	int num;

	printf("������ �Է��ϼ��� >> : ");
	if (scanf_s("%d", &num) < 0)
	{
		num *= -0;
		printf("���� num�� ���밪�� %d �Դϴ�.", num);
	}
	else if (scanf_s("%d", &num) > 0)
	{
		printf("���� num�� ���밪�� %d �Դϴ�.", num);
	}
	else
	{
		printf("�ùٸ� ���� ���� �Է����ּ���");
	}
	// ���� 0�� ���밪�� ǥ���ϰ������ ��� ǥ���ϳ�..
}