#include <stdio.h>

// 11. for���� �̿��ؼ� 1���� 10���� ���� ����ϼ���

void main() {

	int sum = 0;
	for (int i = 1; i < 11; i++)
	{
		sum += i;
	}

	printf("1���� 10������ ���� %d�Դϴ�.", sum);
}