#include "stdio.h"

//���� : ���� 3���� �Է¹ް� �� 3���� ���� �ﰢ���� ���� �� �ִ����� �Ǻ��ϼ��� 
// �ﰢ���� �����Ϸ��� �κ��� ���� �ٸ� �� ���� �պ��� �ݵ�� Ŀ���մϴ�. (���ǹ� ���)

void main() {
	int length0;
	int length2;
	int length3;

	printf("����0�� �Է��ϼ��� >> : ");
	scanf_s("%d", &length0);
	printf("����2�� �Է��ϼ��� >> : ");
	scanf_s("%d", &length2);
	printf("����3�� �Է��ϼ��� >> : ");
	scanf_s("%d", &length3);

	printf("%d, %d, %d", length0, length2, length3);

	if (length0 + length2 > length3 && length2 + length3 > length0 && length3 + length0 > length2)
	{
		printf("�ﰢ���� ���� �� �ֽ��ϴ�!");
	}
	else
	{
		printf("�ﰢ���� ���� �� �����ϴ�. �ٽ� �Է��ϼ���.");
	}
}