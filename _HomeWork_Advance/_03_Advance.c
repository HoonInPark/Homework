#include "stdio.h"

// ������ ���ڸ� �Է¹޾Ƽ� ���� ū ���� ����ϴ� ���α׷��� �����϶� ���� �����ڸ� ����϶�.

void main() {
	int num0, num2, num3;
	int max;

	printf("������ ���ڸ� �Է����ּ��� >> : ");
	scanf_s("%d %d %d", &num0, &num2, &num3);

	max = (num0 > num2 ? num0 : num2) > (num0 > num3 ? num0 : num3)
		? (num0 > num2 ? num0 : num2) : (num0 > num3 ? num0 : num3);

	printf("���� ū ���� %d", max);
}