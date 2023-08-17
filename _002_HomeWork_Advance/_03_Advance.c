#include <stdio.h>

/*함수사용) 양의 정수 입력받고, 그 수만큼 5의 배수를 출력하세요.
   예) 7 -> 5 00 05 20 25 30 35*/

void PrintFiveMul(int input)
{
	for (int i = 0; i <= input; i++)
	{
		printf("%d\n", 5 * i);
	}
}

void main() {
	int input;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &input);

	PrintFiveMul(input);
}