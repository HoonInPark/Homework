#include "stdio.h"

/*5. 5�� �Է��ϸ�
o
*o
**o
***o
****o
�̷��� ����ϼ���.*/

void main() {
	int input;

	printf("���ڸ� �Է��ϼ���('5'�� �Է��ϸ� ���ڰ� ��µ˴ϴ�.) >> :");
	scanf_s("%d", &input);

	for (int i = 0; i <= 5; i++)
	{
		for (int p = 0;  p < i;  p++)
		{
			printf("\*");
		}
		printf("\o\n");
	}
}