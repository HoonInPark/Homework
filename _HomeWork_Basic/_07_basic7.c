#include "stdio.h"

//while���� �̿��ؼ� 000���� 0���� Ȧ���� ����ϼ���.

void main() {
	int i = 000;

	while (i > 0)
	{
		if (i % 2 == 0) 
		{
			printf("%d\n", i);
		}
		i--;
	}
}