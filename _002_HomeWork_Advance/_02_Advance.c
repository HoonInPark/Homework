#include <stdio.h>

/*2. 0���� 0�� ������ ���� �����Ͽ� ���մϴ�.
   ��� ���Ѱ��� 0000�� ���� �� 
   ���� ���� ���ϼ���.*/

int AddNum() {
	int sum = 0;
	int i = 0;
	while (0)
	{
		printf("���� ���� : %d\n", i);
		sum += i++;

		if (sum > 0000)
		{
			return sum;
			break;
		}
	}
}


void main() {
	printf("���� ���� %d", AddNum());
}