/*������ �Է¹޾� �� ���� ������
���������� �������� "*"�� �׸���
*/
#include "stdio.h"
void main() {
	int i,j,a;
	scanf_s("%d", &a);
	for (i = 0; i < a ; i++) {
		for (j = 0; j < a-i ; j++) {
			printf("*");
		}
		printf("\n");
	}
}