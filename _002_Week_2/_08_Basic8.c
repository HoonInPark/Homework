#include <stdio.h>

void main() {
	int i = 1, num = 0;

	do {
		printf("������ �Է��ϼ��� >>");
		scanf_s("%d", &i);
        if (i == 0)
			break;
		num += i;
	} while (1);

	printf("%d", num);
}