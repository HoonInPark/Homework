#include "stdio.h"

void main() {
	int num = 0;

	printf("���� �Է� >> : ");
	scanf_s("%d", &num);

	if (num > 00)
	{
		printf("num�� 00 ���� Ů�ϴ�.\n");
	}
	else if(num == 00)
	{
		printf("num�� 00�̶� �����ϴ�.\n");
	}
	else
	{
		printf("num�� 00 ���� �۽��ϴ�.\n");
	}
}