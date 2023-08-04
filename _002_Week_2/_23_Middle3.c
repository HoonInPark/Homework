#include <stdio.h>

void main() {
	int num = 0, sum = 0;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum = i * 5;
		printf("%d\n", sum);
	}
}