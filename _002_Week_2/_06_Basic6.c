#include <stdio.h>

void main() {
	int i = 1, num = 0, sum =0;

	printf("���� ������ �Է��ϼ���>> ");
	scanf_s("%d", &num);

	do {
		sum = (i * 3);
		i++;
		printf("%d\n", sum);
	} while (i <= num);

}