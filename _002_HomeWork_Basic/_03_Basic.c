#include <stdio.h>

// do while ���� �̿��ؼ� 1 ���� 10������ ���� ����ϼ���

void main() {
	int i = 1;
	int sum = 0;
	do
	{
		sum += i;
		printf("%d\n", sum);
		i++;
	} while (i <= 10);
}