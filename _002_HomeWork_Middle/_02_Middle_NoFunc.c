#include <stdio.h>

/*2. 0���� 1�� ������ ���� �����Ͽ� ���մϴ�.
   ��� ���Ѱ��� 1000�� ���� �� �� ���հ� 
   ���� ���� ���ϼ���.*/

void main() {
	int sum = 0;
	int i = 0;

	while (1)
	{
		if (sum > 1000)
		{
			printf("�� ���� %d �Դϴ�.", sum);
			break;
		}
		else
		{
			printf("%d + %d ", sum, i);
			sum = sum + i++;
			printf("���� ���� ���� %d �Դϴ�.\n", sum);
		}
	}
}