#include <stdio.h>

// 4. do~while���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���

void main() {
	int i = 1;

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	} while(i < 11);

}