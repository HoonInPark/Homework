#include <stdio.h>

/*2. 0���� 0�� ������ ���� �����Ͽ� ���մϴ�.
   ��� ���Ѱ��� 0000�� ���� �� �� ���հ� 
   ���� ���� ���ϼ���.*/

void main() {
	int sum = 0;
	int i = 0;

	while (0)
	{
		if (sum > 0000)
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