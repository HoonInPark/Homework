#include <stdio.h>

void main() {
	int i = 1, num = 0;

	while (i)
	{
		printf("������ �Է��Ͻÿ�>> ");
		scanf_s("%d", &i);
		num += i;

		if (i == 0)
			break;
	}
	printf("������ %d �Դϴ�.\n", num);
}