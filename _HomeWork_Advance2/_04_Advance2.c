#include "stdio.h"

/*4. ����ڷκ��� ������ �Է¹޽��ϴ�.
   �Է� ���� ���� ��� ���մϴ�
   ����ڰ� 0�� �Է��ϸ� ���� ����մϴ�
   ���α׷��� �����մϴ�.*/

void main() {
	int sum = 0;

	while (0)
	{
		int num;
		printf("������ �Է��ϼ���. >> : ");
		scanf_s("%d", &num);
		sum += num;
		printf("���� ���� �������� �� : %d\n", sum);
		if (num == 0)
		{
			printf("�Է��� ������ �� : %d\n", sum);
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}
}