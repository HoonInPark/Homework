#include <stdio.h>

/*3. 양의 정수 입력받고, 그 수만큼 5의 배수를 출력하세요.
   예) 7 -> 5 10 15 20 25 30 35*/

void main() {
	int input;

	printf("양의 정수를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (input > 0) {
		for (int i = 1; i <= input; i++)
		{
			printf("%d\n", 5 * i);
		}
	}
	else
	{
		printf("양의 정수를 입력해주세요.");
	}
}