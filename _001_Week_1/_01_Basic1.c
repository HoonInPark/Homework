#include <stdio.h>

void main() {
	int a, b, c;
	printf("���� 3���� �Է��Ͻÿ�>> ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (c < a + b && b < a + c && a < b + c)
		printf("�ﰢ���� ����� �ֽ��ϴ�.");
	else
		printf("�ﰢ���� ����� �����ϴ�.");
}