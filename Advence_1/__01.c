/*���� �Է½� �� ���� �°� 1�� Ŀ���� * ��
�߰��Ѵ�.*/
#include "stdio.h"

void main() {
	int i,j,a;
	scanf_s("%d", &a);
	for (i = 1; i < a+1; i++)
	{
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}