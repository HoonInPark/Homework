#include "stdio.h"

/*2. 5�� �Է��ϸ� 
*****
****
***
**
*
�̷��� �������� ����ϼ���.*/

void main() {
	int input = 0;

here:
	printf("���ڸ� �Է��ϼ���. ('5'�� �Է��ϸ� ���ڰ� ��µ˴ϴ�) >> : ");
	scanf_s("%d", &input);

	if (input == 5)
	{
		for (int i = 5; i >= 0; i--)
		{
			for (int p = 0; p < i; p++)
			{
				printf("\*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("���ڸ� �ٽ� �Է��ϼ���.");
		goto here;
	}
}