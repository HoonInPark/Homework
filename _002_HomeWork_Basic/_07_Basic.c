#include <stdio.h>

// 7. 입력받은 숫자의 구구단을 출력하세요 예를 들어 숫자 3을 입력하면 3 6 9 12 15 18 .... 27

void main() {
	int input; 
	int i = 1;

	printf("출력할 구구단의 숫자를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (input > 0 && input < 10)
	{
		do
		{
			printf("%d\n", input * i++);
		} while (i <= 9);
	}
	else
	{
		printf("구구단입니다 다시 입력해주세요.");
	}
}