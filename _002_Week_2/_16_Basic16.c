#include <stdio.h>

void main() {
	int i = 1, num = 0;

	for (; 1;) {
		printf("������ �Է��ϼ��� >>");
		scanf_s("%d", &i);
		if (i == 0)
			break;
		num += i;
	}
	printf("%d", num);
}