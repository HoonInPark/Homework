//0���� 1�� ������ ���� �����Ͽ� ���մϴ�.
//��� ���Ѱ��� 1000�� ���� �� �� ���հ�
//���� ���� ���ϼ���.


#include <stdio.h>


int main()
{
	int sum = 0;
	int value = 0;

	while (sum <= 1000)
	{
		sum += value;
		value++;
	}

	printf("Sum: %d \n", sum);
	printf("Value: %d \n", value);

	return 0;


}