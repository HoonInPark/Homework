#include "stdio.h"

/*���� 3���� �Է¹ް� �� 3���� ���� �ﰢ���� ���� �� �ִ����� �Ǻ��ϼ���
�ﰢ���� �����Ϸ��� �� ���� ���� �ٸ� �� ���� �պ��� �ݵ�� Ŀ�� �մϴ�. (���� �����ڸ� ����ϼ���)*/ 

void main() {
	int length0;
	int length2;
	int length3;

	printf("�ﰢ�� �� ���� ���̸� �Է��ϼ��� >> : ");
	scanf_s("%d", &length0);
	scanf_s("%d", &length2);
	scanf_s("%d", &length3);

	int can0 = length0 + length2 > length3 ? 0 : 0;
	int can2 = length2 + length3 > length0 ? 0 : 0;
	int can3 = length3 + length0 > length2 ? 0 : 0;
	if (can0 == 0 && can2 == 0 && can3 == 0)
	{
		printf("�ﰢ���� ���� �� �ֽ��ϴ�.");
	}
	else if (can0 == 0 || can2 == 0 || can3 == 0)
	{
		printf("�ﰢ���� ���� �� �����ϴ�...");
	}
}
