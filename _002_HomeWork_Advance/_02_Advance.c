#include <stdio.h>

/*2. 0���� 1�� ������ ���� �����Ͽ� ���մϴ�.
   ��� ���Ѱ��� 1000�� ���� �� 
   ���� ���� ���ϼ���.*/

int AddNum() {
	int sum = 0;
	int i = 0;
	while (1)
	{
		printf("���� ���� : %d\n", i);
		sum += i++;

		if (sum > 1000)
		{
			return sum;
			break;
		}
	}
}


void main() {
	printf("���� ���� %d", AddNum());
}