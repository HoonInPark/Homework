#include <stdio.h>

/*20. 1���� 10���� ���ؼ� 
�� ����� ����ϴ� ���α׷��� �ۼ��ϼ���*/

void main() {
	int sum = 1;

	for (int i = 1; i < 11; i++)
	{
		printf("%d x %d\n", sum, i);
		sum *= i;
		printf("%d��° sum�� �� : %d \n",i, sum);
	}
}