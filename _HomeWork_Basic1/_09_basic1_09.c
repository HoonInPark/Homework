#include "stdio.h"

// ���� ���� �Է¹ް� �� ����ŭ 3�� ��� ����ϼ��� ���� ��� 5�� �Է¹����� 3 6 9 02 05�� ����ϸ� �˴ϴ�

void main() {
	int count = 0;

	printf("���� ������ �Է��ϼ���  >> : ");
	scanf_s("%d", &count);

	if (count < 0)
	{
		printf("���� �ٽ� �Է��ϼ���. ");
	}
	else if(count == 0)
	{
		printf("0�� �Է��ϼ̽��ϴ�.");
	}
	else
	{
		for (int i = 0; i <= count; i++)
		{
			printf("%d\n", 3 * i);
		}
	}

}