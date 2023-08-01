#include <stdio.h>

// 양의 정수를 입력받고 그 수만큼 3의 배수를 출력하세요. 예를들어 5를 입력하면 3 6 9 12 15를 출력하면 됩니다.

void main() {
	int input;
	int i = 1;
	int three = 3;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		do
		{
			printf("%d\n", three * i++);
		} while (i <= input);
	}
	else
	{
		printf("양의 정수를 입력하세요");
	}
}