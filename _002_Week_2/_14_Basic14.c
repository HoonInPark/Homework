#include <stdio.h>

void main() {
	int i = 1, num = 0, sum = 0;

	printf("���� ������ �Է��ϼ���>> ");
	scanf_s("%d", &num);

	for (; i <= num; i++) {
		sum = (i * 3);
		printf("%d\n", sum);
	}
}