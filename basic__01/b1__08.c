/*�ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�.
���� ������(���׿����ڸ� ����϶�) */
#include "stdio.h"

void main() {
	int num1, num2,bigger;

	printf("insert 1st num>>>");
	scanf_s("%d", &num1);
	printf("insert 2nd num>>>");
	scanf_s("%d", &num2);

	bigger = num1 > num2 ? num1 : num2;
	//num1�� num2���� ũ�� bigger�� num1�� �Ҵ� �׷��� �ʴٸ� num2 �Ҵ�

	printf("%d", bigger);
}