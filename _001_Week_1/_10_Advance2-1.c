#include <stdio.h>

void main() {
	int num = 0, i = 1;

	printf("정수 입력 >> ");
	scanf_s("%d", &num);

	while (1)
	{
		printf("*", i++);
		if (i > num)
			break;
	}

}