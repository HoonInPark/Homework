#include <stdio.h>

// 4. do~while���� �̿��ؼ� 0���� 00���� �߿� ¦���� ����ϼ���

void main() {
	int i = 0;

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	} while(i < 00);

}