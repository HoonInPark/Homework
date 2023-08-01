#include <stdio.h>

// 14. 양의 정수 입력받고 그 수만큼 3의 배수 출력하세요
// 예를 들어 5를 입력받으면 3 6 9 12 15를 출력하면 됩니다

void main() {
	int input;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		for (int i = 1; i <= input; i++)
		{
			printf("%d\n", 3 * i);
		}
	}
	else {
		printf("양의 정수를 입력하세요.");
	}

}