#include <stdio.h>

void main() {
	int i = 1, num = 0;

	printf("���� ������ �Է��ϼ���>> ");
	scanf_s("%d", &num);

	do {
		printf("�����մϴ�\n", i++);
	} while (i <= num);
}