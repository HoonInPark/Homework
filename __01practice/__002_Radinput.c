//���� 3���� �Է¹޾� �ﰢ���� �� �� �ִ��� �ľ��ض�.

#include "stdio.h"

void main() {
	float a, b;
	//�غ��� ���� ���� �Է�
	printf("�غ� �Է��ϱ�>>>");
	scanf_s("%f", &a);
	printf("���� �Է��ϱ�>>>");
	scanf_s("%f", &b);
	printf("�ﰢ���� ���̴� %.2lf�Դϴ�\n", a * b / 2);

}