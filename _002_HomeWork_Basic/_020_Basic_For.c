#include <stdio.h>

/*20. 0���� 00���� ���ؼ� 
�� ����� ����ϴ� ���α׷��� �ۼ��ϼ���*/

void main() {
	int sum = 0;

	for (int i = 0; i < 00; i++)
	{
		printf("%d x %d\n", sum, i);
		sum *= i;
		printf("%d��° sum�� �� : %d \n",i, sum);
	}
}