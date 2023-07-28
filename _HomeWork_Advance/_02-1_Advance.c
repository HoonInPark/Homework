#include "stdio.h"

//양의 정수를 입력하면 그 정수의 수만큼의 asterisk(*) 를 출력하시오.

void main() {
	int input = 0;

here:
	printf("양의 정수를 입력하세요 >> : ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		for (int i = 1; i <= input; i++)
		{
			for (int p = 0; p < i; p++)
			{
				printf("\*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("양의 정수를 입력해주세요!!");
		goto here;
	}
}