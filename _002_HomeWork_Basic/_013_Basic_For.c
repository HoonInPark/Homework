#include <stdio.h>

// 13. 양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요

void main() {
	int input;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		for (int i = 0; i < input; i++)
		{
			printf("감사합니다.\n");
		}
	}
	else
	{
		printf("양의 정수를 입력하세요.");
	}
}