#include <stdio.h>

void main() {
	int num = 0, i = 1;

	printf("���� �Է� >> ");
	scanf_s("%d", &num);

	while (1)
	{
		printf("*", i++);
		if (i > num)
			break;
	}

}