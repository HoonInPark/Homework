#include "stdio.h"

//���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���

void main(){
	int num;

	printf("���� ������ �Է��ϼ��� >> : ");
	scanf_s("%d", &num);
	if ( num < 0)
	{
		printf("���ڸ� �ٽ� �Է��ϼ���.");
	}
	else if (num == 0)
	{
		printf("���α׷��� �����մϴ�.");
	}
	else
	{
		for (int i = 0; i <= num; i++)
		{
			printf("�����մϴ�.\n");
		}
	}
}