/*5�� �Է��ϸ�
o
*o
**o
***o
****o
�̷��� ����ϼ���.*/
#include "stdio.h"
void main() {
	int i, j, a;
	scanf_s("%d", &a);

	for (i = 0; i < a; i++) {
		for (j = 0; j <= i; j++) {
			if (j < i) {
				printf("*");
			}
			else {
				printf("o");
			}
		}
		printf("\n");
	}
}