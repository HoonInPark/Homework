/*3. while���� �̿��ؼ� 10���� 20���� ����ϼ���*/
#include "stdio.h"

void main() {
	int count = 10;
	while (count <= 20) {
		printf("%d\n", count);
		count = count++;
	}
}