#include <stdio.h>

void main() {
	int i = 1, num = 0;

	while (i)
	{
		printf("정수를 입력하시오>> ");
		scanf_s("%d", &i);
		num += i;

		if (i == 0)
			break;
	}
	printf("총합은 %d 입니다.\n", num);
}