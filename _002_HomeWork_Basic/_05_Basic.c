#include <stdio.h>

// 5. 양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요

void main() {
	int input = 0;
	int i = 0;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		do
		{
			printf("감사합니다.\n");
			i++;
		} while (i < input);
	}
	else
	{
		printf("양의 정수를 입력해주세요!");
	}
}