#include <stdio.h>

// do while ���� �̿��ؼ� 0 ���� 00������ ���� ����ϼ���

void main() {
	int i = 0;
	int sum = 0;
	do
	{
		sum += i;
		printf("%d\n", sum);
		i++;
	} while (i <= 00);
}