#include <stdio.h>

/*12. for���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���
   for������ ���ǹ��� �־��ָ� ��
   ¦�� ���� if(num % 2 == 0)*/

void main() {
	for (int i = 1; i < 11; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
	}
}