#include <stdio.h>

void doWhilePrint(int int_lower, int int_interval, int int_upper) {
	int int_temp;
	do
	{
		static int_lower;
	} while (int_lower < int_upper + 1);
	printf("%d���� %d������ ���� %d�Դϴ�.");
}

void main() {
	printf("��� ���ں��� �����Ͻðڽ��ϱ�? >> ");
	int num_lower;
	scanf_s("%d", &num_lower);
	printf("������ �󸶷� �Ͻðڽ��ϱ�? >> ");
	int num_interval;
	scanf_s("%d", &num_interval);
	printf("������ �Ͻðڽ��ϱ�? >> ");
	int num_upper;
	scanf_s("%d", &num_upper);

	doWhilePrint(num_lower, num_interval, num_upper);
}