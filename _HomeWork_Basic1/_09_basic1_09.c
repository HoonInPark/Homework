#include "stdio.h"

// 양의 정수 입력받고 그 수만큼 3의 배수 출력하세요 예를 들어 5를 입력받으면 3 6 9 12 15를 출력하면 됩니다

void main() {
	int count = 0;

	printf("양의 정수를 입력하세요  >> : ");
	scanf_s("%d", &count);

	if (count < 0)
	{
		printf("수를 다시 입력하세요. ");
	}
	else if(count == 0)
	{
		printf("0을 입력하셨습니다.");
	}
	else
	{
		for (int i = 1; i <= count; i++)
		{
			printf("%d\n", 3 * i);
		}
	}

}