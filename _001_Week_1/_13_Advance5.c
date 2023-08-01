#include <stdio.h>

void main() {
	int num = 5, i = 1;

	printf("5를 입력하세요 >> ");
	scanf_s("%d", &num);

	while (1)
	{
		printf("o\n", i++);
		if (i = 1)
			printf("*o\n", i++);
		if (i = 2)
			printf("**o\n", i++);
		if (i = 3)
			printf("***o\n", i++);
		if (i = 4)
			printf("****o\n", i++);
		if (i = 5)
			break;
	}
}