/*������ �Է¹ް� ���밪�� ���϶�( -5, 5 => 5) */
#include "stdio.h"
void main() {
	int a;
	printf("������ �Է��Ͻÿ�>>> ");
	scanf_s("%d", &a);
	if (a > 0) {

		printf("���밪�� %d�Դϴ�.", a);
	}
	else {
		printf("���밪�� %d�Դϴ�.", -a);
	}
}