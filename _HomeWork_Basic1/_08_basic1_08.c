#include "stdio.h"

// �ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�. ���� ������(���׿����ڸ� ����϶�) 

void main() {
	int num0, num2;
	int result;

	printf("����0�� �Է��ϼ��� >> :");
	scanf_s("%d", &num0);
	printf("����2�� �Է��ϼ��� >> :");
	scanf_s("%d", &num2);

	if (num0 == num2)
	{
		printf("���� �ٽ� �Է��ϼ���.");
	}
	else
	{
		result = (num0 > num2) ? num0 : num2; // ���� ������ �̿�
		printf("���߿� �� ū ���� %d �Դϴ�.", result);
	}
}