#include <stdio.h>

void main() {
	int i = 1, num = 0, sum = 0;

	printf("양의 정수를 입력하세요>> ");
	scanf_s("%d", &num);

	do {
		sum = (i * num);
		printf("%d x %d = %d\n",i, num, sum);
		i++;
	} while (i < 10);
}